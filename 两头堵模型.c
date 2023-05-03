//两头堵模型
#include <stdio.h>
#include <string.h>

int main() {
	
	char a[] = {"     hello Zhang DianDian     "};
	char *p1 = a;
	char *p2 = &a[strlen(a) - 1];
	char p3[1024];
	int i = 0;
	while (p1[i] == ' '){
		p1++;
	}
	while(p2[0] == ' '){
		p2--;
	
	}
	printf("[%s]\n",p1);
	printf("[%s]\n",p2);
	strncpy(p3,p1,p2-p1+1);
	printf("%s\n",p3);
	return 0;
}