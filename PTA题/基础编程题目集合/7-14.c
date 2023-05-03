#include <stdio.h>

int main() {
	int a,b,max,sum=0;
	scanf("%d%d",&a,&b);
	if(a>b){
		max=a;
		a=b;
		b=max;
	}
	for(int i=0,c=a;i<=b-a;){
		printf("%5d",c);
		sum=sum+c;
		c++;
		i++;
		if(i%5==0){
			printf("\n");
		}
	}
	printf("\n");
	printf("sum=%d",sum);
		
	
	return 0;
}