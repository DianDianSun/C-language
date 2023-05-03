#include <stdio.h>

int main() {
	
	FILE *p = fopen("./ceshi.txt","r");
	char buf[128] = "";
	int i = 0;
	while(1){
		buf[i++] = fgetc(p);
		if(feof(p) != 0){
			break;
		}
	}
	fputs(buf,stdout);
	return 0;
}