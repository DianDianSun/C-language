#include <stdio.h>
#include <string.h>
int strstr_num(char *str,char *str1){
	
	int i = 0;
	int n = 0;
	char *p = NULL;
	while(str[i] != 0){
		p = strstr(str,str1);
		if(p != NULL){
		n++;
		str = p + strlen(str1);
		i =i + strlen(str1);
		}else{
			i++;
		}
	}
	
	
	return n;
}
int main() {
	
	char a[] = {"dfdsacfacadsfbc"};
	char b[] = "ac";
	printf("%d",strstr_num(a,b));
	return 0;
}