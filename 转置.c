//数组的转置
#include <stdio.h>
int main() {
	
	int a[5] = {1,2,3,4,5};
	int b = sizeof(a)/sizeof(a[0]);
	for(int i = 0,c = b-1,tmp;i<(b-1)/2;i++,c--){
		tmp = a[i];
		a[i] = a[c];
		a[c] = tmp;
	}
	for(int i = 0;i<5;i++){
		printf("%d",a[i]);
	}
	return 0;
}