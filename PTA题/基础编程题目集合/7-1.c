#include <stdio.h>

int main() {
	
	int a;
	scanf("%d",&a);
	float foot,inch;
	foot=(float)a/100/0.3048;	
	inch=((float)a/100/0.3048-(int)foot)*12;
	printf("%d %d",(int)foot,(int)inch);
	return 0;
}