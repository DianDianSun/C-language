//冒泡法
#include <stdio.h>

int main() {
	
	int a[8];
	for(int i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	for(int i=7;i>0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				int tmp;
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<8;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}