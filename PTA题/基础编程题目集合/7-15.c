#include <stdio.h>

int main() {
	float shu;
	scanf("%f",&shu);
	float fenzi(float n);
	float fenmu(float n);
	if(shu<1){
		float i=0,n=1;
		for(;fenzi(n)/fenmu(n)>shu;n++){
			i=i+(float)fenzi(n)/(float)fenmu(n);
		}
		printf("%f",(i+fenzi(n)/fenmu(n))*2);
	}

	return 0;
}
   float fenzi(float n){
	if(n==1||n==2){
		return 1;
	}else{
		return fenzi(n-1)*(n-1);
	}
		
}
float fenmu(float n){
	if(n==1){
		return 1;
	}else{
		return fenmu(n-1)*(2*n-1);
	}
	
}