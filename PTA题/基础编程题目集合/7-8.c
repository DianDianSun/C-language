#include <stdio.h>

int main() {
	
	int a=0;
	scanf("%d",&a);
	if(a<=60&&a>=0){
		printf("Speed: %d - OK",a);
	}else
		printf("Speed: %d - Speeding",a);
	
	return 0;
}