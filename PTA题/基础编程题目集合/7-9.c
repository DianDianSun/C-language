#include <stdio.h>

int main() {
	
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	if(a!=b&&a!=c){
		printf("A");
	}else if(b!=c&&b!=a){
		printf("B");
	}else
		printf("C");
	return 0;
}