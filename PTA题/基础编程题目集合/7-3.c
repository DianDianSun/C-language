#include <stdio.h>

int main() {
	
	int n,l,z,y;
	scanf("%d",&n);
	l=n/100;
	z=n/10%10;
	y=n%10;
	printf("%d",y*100+z*10+l);
	return 0;
}