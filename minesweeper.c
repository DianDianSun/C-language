//
//  main.c
//  mine sweeper
//
//  Created by 赵旭日 on 2023/4/5.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    char a;
    char b;
}point;
void calculate_bomb2(int x,int y,point **chart,int length,int width,int *around_bombnum){
    if(x < 0 || x > width-1 || y < 0 || y > width-1){
        return;
    }
    if(chart[x][y].b == '*')
        (*around_bombnum)++;
    
}
void calculate_bomb1(int x,int y,point **chart,int length,int width,int *around_bombnum){
    calculate_bomb2(x, y+1, chart, length, width, around_bombnum);
    calculate_bomb2(x, y-1, chart, length, width, around_bombnum);
    calculate_bomb2(x-1, y-1, chart, length, width, around_bombnum);
    calculate_bomb2(x-1, y, chart, length, width, around_bombnum);
    calculate_bomb2(x-1, y+1, chart, length, width, around_bombnum);
    calculate_bomb2(x+1, y-1, chart, length, width, around_bombnum);
    calculate_bomb2(x+1, y+1, chart, length, width, around_bombnum);
    calculate_bomb2(x+1, y+1, chart, length, width, around_bombnum);
}
void left_click1(int x,int y,point **chart,int length,int width){
    
    if(x < 0 || x > width-1 || y < 0 || y > width-1){
        return;
    }
    int around_bombnum = 0;
    calculate_bomb1(x, y, chart,length,width,&around_bombnum);
    if(around_bombnum){
        chart[x][y].a = around_bombnum + '0';
    }else if(around_bombnum == 0){
        chart[x][y].b = around_bombnum + '0';
        left_click1(x-1,y,chart,length,width);
        left_click1(x+1,y,chart,length,width);
        left_click1(x,y+1,chart,length,width);
        left_click1(x-1,y+1,chart,length,width);
        left_click1(x+1,y+1,chart,length,width);
        left_click1(x,y-1,chart,length,width);
        left_click1(x+1,y-1,chart,length,width);
        left_click1(x-1,y-1,chart,length,width);
    }
}
void right_click1(int x,int y,point **chart,int *bombnum){
    if(chart[x][y].b == '0'){
        chart[x][y].b = '!';
        *bombnum = *bombnum - 1;
    }else if(chart[x][y].b == '!'){
        chart[x][y].b = '?';
        *bombnum = *bombnum + 1;
    }else if(chart[x][y].b == '?'){
        chart[x][y].b = '0';
    }
}
void my_printf(point **chart,int length,int width,int *bombnum,int *acttimes){
    int i = 0,j = 0;
    for(i = 0;i < width;i++){
        for(j = 0;j < length; j++){
            if(chart[i][j].b == '0'||chart[i][j].b == '*'){
                printf("%c",chart[i][j].a);
            }else{
                printf("%c",chart[i][j].b);
            }
        }
        printf("\n");
    }
}
void response(int n,int x,int y,int length,int width,int *bombnum,point **chart){
    x--;y--;
    if(n == 1){
        left_click1(x,y,chart,length,width);
    }else if(n == 2||n == 3||n ==4){
        right_click1(x, y, chart, bombnum);
    }else if(n == 4){
        
    }
}
void choose_mode(int *length,int *width,int *bombnum,int mode){
    if(mode == 1){
        *length = 9;
        *width = 9;
        *bombnum = 10;
    }else if(mode == 2){
        *length = 16;
        *width = 16;
        *bombnum = 40;
    }else if(mode == 3){
        *length = 30;
        *width = 16;
        *bombnum = 40;
    }else if(mode == 4){
        int x,y,bomb;
        scanf("%d %d %d",&x,&y,&bomb);
        *length = x;
        *width = y;
        *bombnum = bomb;
    }
}
/*
point **get_chart_from_OJ(int length,int width){
    point **chart = malloc(sizeof(point *) * width);
    char content;
    for(int i = 0;i < width;i++){
        chart[i] = malloc(sizeof(point) * length);
        char s[length+1];
        scanf("%s",s);
        for(int j = 0;j < length;j++){
            content = s[j];
            if(content == '.'){
                chart[i][j].a = '.';
                chart[i][j].b = '0';
            }else if(content == '*'){
                chart[i][j].a = '.';
                chart[i][j].b = '*';
            }
        }
    }
    return chart;
}
*/
int main() {
    
    int length,width,mode,bombnum;
    int acttimes = 0;
    /*
    scanf("%d",&mode);
    choose_mode(&length,&width,&bombnum,mode);
    */
    length = 3;
    width = 3;
    bombnum = 1;
    mode = 1;
    point **chart = malloc(sizeof(point *)*width);
    chart[0] = malloc(sizeof(point)*length);
    chart[1] = malloc(sizeof(point)*length);
    chart[2] = malloc(sizeof(point)*length);
    chart[0][0].a = '.';
    chart[0][1].a = '.';
    chart[0][2].a = '.';
    
    chart[1][0].a = '.';
    chart[1][1].b = '*';
    chart[1][2].a = '.';
    
    chart[2][0].a = '.';
    chart[2][1].a = '.';
    chart[2][2].a = '.';
    int n,x,y;
    while(1){
        acttimes++;
        
        scanf("%d %d %d",&n,&x,&y);
        response(n,x,y,length,width,&bombnum,chart);
        my_printf(chart, length, width, &bombnum, &acttimes);
    }
    return 0;
}
