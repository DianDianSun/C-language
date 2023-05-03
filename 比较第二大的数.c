#include <stdio.h>

int main() {
	int a[] = {100,100,100,234,123,500,32,68,41,99,13,71};
	int *A=&a[0],max,smax;
	if(A[0] > A[1]){
		max = A[0];
		smax = A[1];
	}else{
		max = A[1];
		smax = A[0];
	}
	for(int i = 2;i < sizeof(a)/sizeof(a[0]);i++){
		if(A[i] > max){
			smax = max;
			max = A[i];
		}else if(A[i]>smax){
			smax = A[i];
		}
	}printf("%d",smax);
	return 0;
}