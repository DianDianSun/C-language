#include <stdio.h>
void Merge(int* A,int* B,int* C,int m,int n){
	for(int i = 0;i<m;i++){
		*(C + i) = *(A + i);
	}for(int i = 0;i < n;i++){
		*(C + m + i)=*(B + i);
	}for(int i = 0;i<m + n-1;i++){
		for(int c = 0,j=i + 1;j<m + n;j++){
			if(*(C+i)>*(C+j)){
				c = *(C+i);
				*(C+i) = *(C+j);
				*(C+j) = c;
			}
		}
	}for(int i = 0;i < m + n;i++){
		printf("%d ",*(C+i));
	}
}


int main(){
	int A[11] = {10,1,23,2,56,2,21,54,9,1,45};
	int B[3] = {12,4,66};
	int C[14];
	Merge((int *)&A,(int *)&B,(int *)&C,11,3);
	return 0;
}