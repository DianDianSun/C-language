#include <stdio.h>
#include <unistd.h>

int main() {
	int x,y;
	scanf("%d %d",&x,&y);
	printf("\033[%d;%dH", (x), (y));
	printf("666");
	return 0;
}