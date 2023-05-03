#include <stdio.h>

int main() {
	
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	if(a>12){
		printf("%d%c%d PM",a-12,c,b);
	}else if(a==12){
		printf("%d%c%d PM",a,c,b);
	}else{
		printf("%d%c%d AM",a,c,b);
	}
	
	return 0;
}