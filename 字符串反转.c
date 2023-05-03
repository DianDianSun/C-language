//字符串反转模型
#include <stdio.h>
#include <string.h>

char *zhuanhuan(char *a){
	char *p1 = a;
	char *p2 = &a[strlen(a)-1];
	while(p2 > p1){
		char c ;
		c  = p1[0];
		p1[0] = p2[0];
		p2[0] = c;
		p2--,p1++;
	}
	return a;

}
int main() {
	
	char a[] = "woaizhangdiandian";
	printf("%s",zhuanhuan(a));
	return 0;
}