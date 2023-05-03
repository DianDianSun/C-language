#include <stdio.h>
void my_strcopy(char *p1,char *p2){
	int i=0;
	while(1){
		if(p1[i] == 0){
			break;
		}
		p2[i] = p1[i];	
		i++;
	}
	 
}

int main() {
	
	char A[] ="hello";
	char B[128] = "";
	my_strcopy((char *)&A,(char *)&B);
	fputs(B,stdout);
	return 0;
}