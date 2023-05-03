//沉底法
#include <stdio.h>

int main() {
	int a[8];
	for(int i=0,c;i<8;i++){
		scanf("%d\n",&a[i]);
	}
	int max;
	for(int i=0;i<8;i++){
		for(int tmp,j=i+1;j<9;j++){
			if(a[i]<a[j]){ 
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(int i=0,c;i<8;i++){
		printf("%d\t",a[i]);
	}
	
	
	return 0;
}