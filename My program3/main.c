#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

void get_infor(){
	FILE *p = fopen("./diandian.txt","w");
	char fuhao[4] = {'+','-','*','/'};
	srand(time(NULL));
	char buf[128] = "";
	for(int i = 0;i < 10;i++){
		int a = rand()%100 + 1;
		int b = rand()%100 + 1;
		char c = fuhao[rand()%4];
		sprintf(buf,"%d%c%d=\n",a,c,b);
		fputs(buf,p);
	}
	fclose(p);
	
}
void jisuan(){
	FILE *p = fopen("./diandian.txt","r");
	char str[128] = "";
	char cmd[128] = "";
	char *p1 = cmd,*p2 = NULL;
	int a1 = 0;
	int a,b,s;
	char c;
	for(int i =0;i < 10;i++){
		fgets(str,sizeof(str),p);
		sscanf(str,"%d%c%d\n",&a,&c,&b);
		switch(c){
			case '-': s = a - b;break;
			case '+': s = a + b;break;	
			case '*': s = a * b;break;
			case '/': s = a / b;break;
		}
		
		a1 = sprintf(p1,"%d%c%d=%d\n",a,c,b,s);
		p1 = p1 +a1;

	}
	fclose(p);
	FILE *p3 = fopen("./diandian.txt","a+");
	fputs(cmd,p3);
	fclose(p3);
}
int main (){
	get_infor();
	jisuan();
	
	return 0;
}