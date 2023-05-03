#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "my_result.h"

int main() {
	srand(time(NULL));//设置随机数种子
	int suijishu[4]={rand()%10,rand()%10,rand()%10,rand()%10};
while(1){//rand()获得一个随机数
		int n;
		printf("请输入一个四位数: ");
		scanf("%d",&n);
		int shurushu[4]={n/1000,n/100%10,n/10%10,n%10};
			int p=0,u=0;
		for(int j=0;j<4;j++){
			if(result(shurushu[j],suijishu[j],j+1,p)!=0){
				u++;
			}
		}
	if(u==0)break;
	}
	sleep(2);
	printf("YOU ARE WIN!!\n");
	sleep(2);//停留2秒.arm芯片
	printf("牛逼！！");
	return 0;
}