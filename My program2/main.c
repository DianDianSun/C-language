	#include <stdio.h>
#include <string.h>
#include "jisuanqi.h"
int main() {
	int a,b;
	char s[5];
	scanf("%d %s %d",&a,s,&b);
	if(0==my_strcmp("+",s)){
		printf("%d",add(a,b));
	}else if(0==my_strcmp("-",s)){
		printf("%d",sub(a,b));
	}else if(0==my_strcmp("*",s)){
		printf("%d",mux(a,b));
	}else if(0==my_strcmp("/",s)){
		printf("%d",dive(a,b));
	}
	return 0;
}