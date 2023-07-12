#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *fp = fopen("Untitled.txt", "r");
	int arr[5];
	for(int i = 0;i < 5;i++){
		char str[10];
		fgets(str, 10, fp);
		arr[i] = atoi(str);
	}
	char buf[50000];
	int n;
	scanf("%d",&n);
	if(n != 1){
		for(int i = 6;i <= arr[n-2];i++){
			fgets(buf,1000,fp);
		}
	}
	int rows;
	int tmp = 0;
	if(n == 1){
		rows = arr[n-1] - 6+1; 
	}else if(n == 5){
		rows = arr[n-1]-arr[n-2]+1;
	}else{
	    rows = arr[n-1]-arr[n-2];
	}
	int i = 0,k = 0;
	char TMP[5000];
	char ch1,ch2,ch3,ch4;
	while(1){
		if(k++ == 0){
			ch1 = fgetc(fp);
			if(ch1 == '\n')
				tmp++;
		}
		if(feof(fp))
			break;
		ch2 = fgetc(fp);
		if(ch2 == '\n')
			tmp++;
		if(ch1 == '/'&&ch2 == '/'){
			k = 0;
			if(feof(fp))
				break;
			fgets(TMP,1000,fp);
			buf[i++] = '\n';
			tmp++;
		}else if(ch1 == '/'&&ch2 == '*'){
			k = 0;
			int j = 0;
			while(1){
				if(j++ == 0){
					if(feof(fp))
						break;
					ch3 = fgetc(fp);
					if(ch3 == '\n'){
						tmp++;
					}
				}
				if(feof(fp))
					break;
				ch4 = fgetc(fp);
				if(ch4 == '\n'){
					tmp++;
				}
				if(ch3 == '*'&&ch4 == '/'){
					break;
				}
				ch3 = ch4;
			}
		}else{
			buf[i++] = ch1;
		}
		ch1 = ch2;
		if(tmp == rows){
			break;
		}

	}
	buf[i]='\0';
	printf("%s",buf);
	fclose(fp);
	return 0;
}