#include <stdio.h>

int main() {
	float f1,f2;
	char a=0;
	int n;
	scanf("%f %d %c %f",&f1,&n,&a,&f2);

	printf("%c %d %.2f %.2f",a,n,f1,f2);
	return 0;
}