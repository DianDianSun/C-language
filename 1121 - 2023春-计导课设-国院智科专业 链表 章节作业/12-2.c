#include <stdio.h>

int main() {
	FILE *fp = fopen("dict.dic","r");
	char a,aa[5];
	short b,bb[5];
	int c,cc[5];
	long d,dd[5];
	long long e,ee[5];
	float g,gg[5];
	double h,hh[5];
	int n;
	scanf("%d",&n);
	while(n >= 1){
		fread(&a,sizeof(char), 1 ,fp);
		fread(&b,sizeof(short), 1, fp);
		fread(&c,sizeof(int),1,fp);
		fread(&d ,sizeof(long),1,fp);
		fread(&e,sizeof(long long), 1 ,fp);
		fread(&g,sizeof(float), 1,fp);
		fread(&h,sizeof(double), 1,fp);
		fread(aa,sizeof(char),5,fp);
		fread(bb,sizeof(short),5,fp);
		fread(cc,sizeof(int),5,fp);
		fread(dd,sizeof(long),5,fp);
		fread(ee,sizeof(long long),5,fp);
		fread(gg,sizeof(float),5,fp);
		fread(hh,sizeof(double),5,fp);
		n--;
	}
	printf("%c\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%ld\n",d);
	printf("%lld\n",e);
	printf("%f\n",g);
	printf("%f\n",h);
	printf("%s",aa);
	int i = 0;
	for(int i = 0;i < 5;i++ ){
		printf("%d ",bb[i]);
	}
	printf("\n");
	for(int i = 0;i < 5;i++ ){
		printf("%d ",cc[i]);
	}
	printf("\n");
	for(int i = 0;i < 5;i++ ){
		printf("%ld ",dd[i]);
	}
	printf("\n");
	for(int i = 0;i < 5;i++ ){
		printf("%lld ",ee[i]);
	}
	printf("\n");
	for(int i = 0;i < 5;i++ ){
		printf("%f ",gg[i]);
	}
	printf("\n");
	for(int i = 0;i < 5;i++ ){
		printf("%f ",hh[i]);
	}
	printf("\n");
	
	
	return 0;
}