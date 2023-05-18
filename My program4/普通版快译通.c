#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int begain = 0;
int end = 0;
typedef struct a{
	
	char danci[256];
	char fanyi[256];
	
}danci;

void danciku(danci **p){
	danci *a = NULL;
	a = malloc(sizeof(danci)*8);
	FILE *fp = fopen("./cidian.txt","r");
	for(int i =0;i<8;i++){
		fgets(a[i].danci, sizeof(danci), fp);
		
		fgets(a[i].fanyi, sizeof(danci), fp);
		
	}
	*p = a;
	fclose(fp);
}
int search(char *p1,danci *p){
	for(int i = 0;i < 8;i++){
		if(strcmp(p[i].danci,p1) == 0){
			printf("翻译为：%s\n",p[i].fanyi);
			return 0;
		}
	}
	return 1;

}
int main() {
	
	danci *p = NULL;
	danciku(&p);
	int i = 0;
	while(1){
		printf("请输入一个单词：");
		begain = clock();
		char shuru[256] = "";
		fgets(shuru,sizeof(shuru), stdin);
		end = clock();
		printf("consume %d ms ",end - begain);
		if(search(shuru,p)){
			printf("NO FIND\n");
		}
	}
	return 0;
}