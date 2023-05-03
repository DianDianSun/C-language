//
// jisuanqi.c
// Created by 赵旭日 on 2023/2/25.

#include "jisuanqi.h"
#include <string.h>

int  my_strcmp(char s1[],char s2[]){
	int i=0;
	if(strlen(s1)==strlen(s2)){
		for(int a=0,b=0;a<strlen(s1)-1;a++,b++){
			if(s1[a]!=s2[b]){
				i++;if(i!=0)break;
			}
		}return i;
	}else{
		return 1;
	}
}
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mux(int a,int b){
	return a*b;
}
int dive(int a,int b){
	return a/b;
}