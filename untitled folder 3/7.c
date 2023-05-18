#include <stdio.h>

int main() {
	char buf[1000];
	char ch;
	int i = 0;
	FILE *p = fopen("./666.txt","r");
	while(!feof(p)){
		ch = getc(p);
		if(ch>0 && ch<125)
			buf[i++] = ch;
	}
	buf[i] = '\0';
	fseek(p, 0, SEEK_SET);
	FILE *p2 = fopen("./777.txt","w");
	fwrite(buf,sizeof(buf),1,p2);
	return 0;
}