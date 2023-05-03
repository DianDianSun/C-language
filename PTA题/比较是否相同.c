#include <stdio.h>
#include <string.h>

int main() {
	int a=0;
	char str1[128]="";
	char str2[128]="";
	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);
	//int n=strlen(str1),b=strlen(str2);
	if(strlen(str1)==strlen(str2)){
		for(int i=0,j=0;i<strlen(str1)-1;i++,j++){
			if(str1[i]!=str2[j]){
				a++;
			}
		}
		if(a==0){
			printf("YES");
		}else{
			printf("NO");
		}
	}else{
		printf("NO");
	}
	return 0;
}