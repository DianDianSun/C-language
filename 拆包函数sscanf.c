#include <stdio.h>
#include <string.h>

int main() {
	int a;
	int b;
	char c,buf2[10] = "";
	char buf[1024] = "beiiing2c2:,2";
	sscanf(buf,"bei%cing%dc%d:,2",&c,&a,&b);
	sprintf(buf2,"%d666",a);
	puts(buf2);
	return 0;
}