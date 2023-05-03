#include <stdio.h>
#include <string.h>
int strstr_num(char *str,char *str1){
	
	int i = 0;
	int n = 0;
	char *p = str;
	do{
		p = strstr(p,str1);
		if(p != NULL){
			n++;
			p = p + strlen(str1);
		}
	}while(p != NULL);
	
	
	return n;
}
int main() {
	
	char a[] = {"dfdsacfacadsfbc"};
	char b[] = "ac";
	printf("%d",strstr_num(a,b));
	return 0;
}