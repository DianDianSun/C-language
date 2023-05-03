#include <stdio.h>
#include <string.h>

int main() {
	
	FILE *p = fopen("./ceshi.txt","r");
	if(p == NULL){
		perror("");
	}
	char buf[128] ="";
	int i = 0,b=0;
	

	while((buf[i++] = fgetc(p)) != EOF){
		b++;
	}
	buf[b] = 0;
	fputs(buf,stdout);
	return 0;
}