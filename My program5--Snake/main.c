#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define wide 30
#define long 50
#define MOVETO(x,y) printf("\033[%d;%dH", (x), (y))
void my_move1(int x,int y){
	printf("\033[%dB",y);
	printf("\033[%dC",x);
}
void my_move2(int x,int y){
	printf("\033[%dA",y);
	printf("\033[%dD",x);
}
//1 设置地图范围
//2 初始化蛇 初始化食物
//3 将蛇和食物显示在屏幕上
//4 蛇的移动
/*
    a> 蛇碰到墙
    b> 蛇碰到自己的身体
	c> 蛇碰到障碍物
	d> 蛇碰到食物（身体增长一节,原食物消失，生成新食物，加分）
	*/
//
typedef struct body{
	int x;
	int y;
}body;

typedef struct snake{
	
	body alllen[wide*long];
	int len;
	body food;
	
}snake;
void my_startfood(snake *snake){
	srand(time(NULL));
	snake->food.x = rand()%long-1;
	snake->food.y = rand()%wide-1;
}
void my_startsnake(snake *snake){
	
	snake->alllen[0].x = long/2;
	snake->alllen[0].y = wide/2;
	snake->alllen[1].x = long/2 - 1;
	snake->alllen[1].y = wide/2;
	snake->len = 2;
	my_startfood(snake);
}
void my_show(snake *snake){
	for(int i = 0;i<snake->len;i++){
		int X = snake->alllen[i].x;
		int Y = snake->alllen[i].y;
		my_move1(X, Y);
		if(i == 0){
			printf("@");
		}else{
			printf("@");
		}
		my_move2(X, Y);
	}
}
int main() {
	
	snake *snake = malloc(sizeof(snake));
	my_startsnake(snake);
	my_show(snake);
	return 0;
}