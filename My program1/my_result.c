//
// my_result.c
// Created by 赵旭日 on 2023/2/25.
#include "my_result.h"
#include <stdio.h>
int result(int a,int b,int c,int d){
	if(a>b){
		printf("第%d个数字大\n",c);d++;
	}else if(a==b){
		printf("第%d个数字正确！\n",c);
	}else{
		printf("第%d个数字小\n",c);d++;
	}
	return d;
}