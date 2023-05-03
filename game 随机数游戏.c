#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int n;
	//printf("0代表小，1代表大\n");
	srand(time(NULL));//设置随机数种子
	int a=rand()%10;//rand()获得随机数
	int b=rand()%10;
	int c=rand()%10;
	int d=rand()%10;
    int g=n/1000,s=n/100%10,B=n/10%10,q=n%10;
	//修改前;while(a!=g||s!=b||B!=c||q!=d){
	while(1){
		printf("请输入一个四位数:");
		scanf("%d",&n);
		g=n/1000,s=n/100%10,B=n/10%10,q=n%10;
		if(a==g&&s==b&&B==c&&q==d)break;
		if(a==g){
			printf("第一个数是对的\n");
		}else{
			printf("第一个数是错的%d\n",a<g);
		}
		if(b==s){
			printf("第二个数是对的\n");
		}else{
			printf("第二个数是错的%d\n",b<s);
		}
		if(B==c){
			printf("第三个数是对的\n");
		}else{
			printf("第三个数是错的%d\n",c<B);
		}
		if(q==d){
			printf("第四个数是对的\n");
		}else{
			printf("第四个数是错的%d\n",d<q);
		}
		 g=n/1000,s=n/100%10,B=n/10%10,q=n%10;

	}
	printf("第一个数是对的\n");
	printf("第二个数是对的\n");
	printf("第三个数是对的\n");
	printf("第四个数是对的\n");
	/*char str1[128]="";
	char str2[128]="";
	scanf("%s%s",str1,str2);
	
	int n=strlen(str1);
	int b=strlen(str2);
	for(int i=n,j=0;j<b;i++,j++){
		str1[i]=str2[j];
	}
	fputs(str1,stdout);
	return 0;*/
}