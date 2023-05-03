#include <stdio.h>

int main() {
	int c = 0;
	int a,b;
	scanf("%d %d",&a,&b);
	int i = a;
	for(;i <= b;i++){
		int sum = 0;
		for(int j = 1;j < i;j++){
			if(i%j == 0){
				sum += j;
			}
		}
		if(i == sum){
			c++;
			printf("%d = 1 ",i);
			for(int k = 2;k < i;k++){
				if(i % k == 0){
					printf("+ %d ",k);
				}
			}
			printf("\n");
		}
	}
	if(c == 0){
		printf("None");
	}
	return 0;
}