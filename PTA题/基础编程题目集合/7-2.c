#include <stdio.h>

int main() {
	int Begain,Time,t1,t2,sum;
	scanf("%d%d",&Begain,&Time);
	sum=Begain/100*60+Begain%100+Time;
	t1 = sum/60;
	t2 = sum%60;
	if(t2==0){
		printf("%d00",t1);
	}else if(t1 == 0){
		printf("0%d",t2);
	}else{
		printf("%d%d",t1,t2);
	}
	return 0;
}