#include <stdio.h>
#include <string.h>

int main() {
	
	char a[] = {"zhangdiandian*ai*zhaoxueri*1314"};
	char *p[10] = {NULL};
	int i= 0;
	do{
		if(i == 0){
			p[i] = strtok(a, "*");
		}else{
			p[i] = strtok(NULL,"*");
		}
	}while(p[i++]!=NULL);
	i = 0;
	while(p[i] != 0){
		printf("%s ",p[i++]);
	}
	return 0;
}