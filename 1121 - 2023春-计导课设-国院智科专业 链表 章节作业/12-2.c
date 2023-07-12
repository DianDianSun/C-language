#include <stdio.h>

void freadddd(int numfsad,char *abandon,short *bread,int  *cram,long *decide,long long *english,float *gril,double *heiht,char *fawebs,short *klnjdvgfsnkj,int *fsdalk,long *ufughjud,long long *dasklfjasdlkfja,float *dsklfnakflaslk,double *lkfsafsalflk,FILE *ppppp);
int main() {
	FILE *ppppp = fopen("dict.dic","r");
	
	char abandon,fawebs[5];
	short bread,klnjdvgfsnkj[5];
	
	int cram,fsdalk[5];
	long decide,ufughjud[5];
	
	long long english,dasklfjasdlkfja[5];
	
	float gril,dsklfnakflaslk[5];
	
	double heiht,lkfsafsalflk[5];
	
	int numfsad;
	scanf("%d",&numfsad);
	freadddd(numfsad,&abandon,&bread,&cram,&decide,&english,&gril,&heiht,fawebs,klnjdvgfsnkj,fsdalk,ufughjud,dasklfjasdlkfja,dsklfnakflaslk,lkfsafsalflk,ppppp);
	printf("%c\n",abandon);
	printf("%d\n",bread);
	printf("%d\n",cram);
	printf("%ld\n",decide);
	printf("%lld\n",english);
	printf("%f\n",gril);
	printf("%f\n",heiht);
	printf("%s\n",fawebs);
	int i = 0;
	printf("%d ",klnjdvgfsnkj[0]);
	printf("%d ",klnjdvgfsnkj[1]);
	printf("%d ",klnjdvgfsnkj[2]);
	printf("%d ",klnjdvgfsnkj[3]);
	printf("%d ",klnjdvgfsnkj[4]);
	printf("\n");
	printf("%d ", fsdalk[0]);
	printf("%d ", fsdalk[1]);
	printf("%d ", fsdalk[2]);
	printf("%d ", fsdalk[3]);
	printf("%d ", fsdalk[4]);
	printf("\n");
	printf("%ld ", ufughjud[0]);
	printf("%ld ", ufughjud[1]);
	printf("%ld ", ufughjud[2]);
	printf("%ld ", ufughjud[3]);
	printf("%ld ", ufughjud[4]);
	printf("\n");
	printf("%lld ", dasklfjasdlkfja[0]);
	printf("%lld ", dasklfjasdlkfja[1]);
	printf("%lld ", dasklfjasdlkfja[2]);
	printf("%lld ", dasklfjasdlkfja[3]);
	printf("%lld ", dasklfjasdlkfja[4]);
	printf("\n");
	
	printf("%f ", dsklfnakflaslk[0]);
	printf("%f ", dsklfnakflaslk[1]);
	printf("%f ", dsklfnakflaslk[2]);
	printf("%f ", dsklfnakflaslk[3]);
	printf("%f ", dsklfnakflaslk[4]);
	printf("\n");
	
	printf("%f ", lkfsafsalflk[0]);
	printf("%f ", lkfsafsalflk[1]);
	printf("%f ", lkfsafsalflk[2]);
	printf("%f ", lkfsafsalflk[3]);
	printf("%f ", lkfsafsalflk[4]);
	printf("\n");
	
	return 0;
}
void freadddd(int numfsad,char *abandon,short *bread,int  *cram,long *decide,long long *english,float *gril,double *heiht,char *fawebs,short *klnjdvgfsnkj,int *fsdalk,long *ufughjud,long long *dasklfjasdlkfja,float *dsklfnakflaslk,double *lkfsafsalflk,FILE *ppppp)
{
	if(numfsad > 0)
		{
			fread(abandon,sizeof(char), 1 ,ppppp);
			fread(bread,sizeof(short), 1, ppppp);
			fread(cram,sizeof(int),1,ppppp);
			fread(decide ,sizeof(long),1,ppppp);
			fread(english,sizeof(long long), 1 ,ppppp);
			fread(gril,sizeof(float), 1,ppppp);
			fread(heiht,sizeof(double), 1,ppppp);
			fread(fawebs,sizeof(char),5,ppppp);
			fread(klnjdvgfsnkj,sizeof(short),5,ppppp);
			fread(fsdalk,sizeof(int),5,ppppp);
			fread(ufughjud,sizeof(long),5,ppppp);
			fread(dasklfjasdlkfja,sizeof(long long),5,ppppp);
			fread(dsklfnakflaslk,sizeof(float),5,ppppp);
			fread(lkfsafsalflk,sizeof(double),5,ppppp);
			numfsad--;
		}
	if(numfsad > 0)
		{
			fread(&abandon,sizeof(char), 1 ,ppppp);
			fread(&bread,sizeof(short), 1, ppppp);
			fread(&cram,sizeof(int),1,ppppp);
			fread(&decide ,sizeof(long),1,ppppp);
			fread(&english,sizeof(long long), 1 ,ppppp);
			fread(&gril,sizeof(float), 1,ppppp);
			fread(&heiht,sizeof(double), 1,ppppp);
			fread(fawebs,sizeof(char),5,ppppp);
			fread(klnjdvgfsnkj,sizeof(short),5,ppppp);
			fread(fsdalk,sizeof(int),5,ppppp);
			fread(ufughjud,sizeof(long),5,ppppp);
			fread(dasklfjasdlkfja,sizeof(long long),5,ppppp);
			fread(dsklfnakflaslk,sizeof(float),5,ppppp);
			fread(lkfsafsalflk,sizeof(double),5,ppppp);
			numfsad--;
		}
	if(numfsad > 0)
		{
			fread(&abandon,sizeof(char), 1 ,ppppp);
			fread(&bread,sizeof(short), 1, ppppp);
			fread(&cram,sizeof(int),1,ppppp);
			fread(&decide ,sizeof(long),1,ppppp);
			fread(&english,sizeof(long long), 1 ,ppppp);
			fread(&gril,sizeof(float), 1,ppppp);
			fread(&heiht,sizeof(double), 1,ppppp);
			fread(fawebs,sizeof(char),5,ppppp);
			fread(klnjdvgfsnkj,sizeof(short),5,ppppp);
			fread(fsdalk,sizeof(int),5,ppppp);
			fread(ufughjud,sizeof(long),5,ppppp);
			fread(dasklfjasdlkfja,sizeof(long long),5,ppppp);
			fread(dsklfnakflaslk,sizeof(float),5,ppppp);
			fread(lkfsafsalflk,sizeof(double),5,ppppp);
			numfsad--;
		}		if(numfsad > 0)
			{
				fread(&abandon,sizeof(char), 1 ,ppppp);
				fread(&bread,sizeof(short), 1, ppppp);
				fread(&cram,sizeof(int),1,ppppp);
				fread(&decide ,sizeof(long),1,ppppp);
				fread(&english,sizeof(long long), 1 ,ppppp);
				fread(&gril,sizeof(float), 1,ppppp);
				fread(&heiht,sizeof(double), 1,ppppp);
				fread(fawebs,sizeof(char),5,ppppp);
				fread(klnjdvgfsnkj,sizeof(short),5,ppppp);
				fread(fsdalk,sizeof(int),5,ppppp);
				fread(ufughjud,sizeof(long),5,ppppp);
				fread(dasklfjasdlkfja,sizeof(long long),5,ppppp);
				fread(dsklfnakflaslk,sizeof(float),5,ppppp);
				fread(lkfsafsalflk,sizeof(double),5,ppppp);
				numfsad--;
			}		if(numfsad > 0)
				{
					fread(&abandon,sizeof(char), 1 ,ppppp);
					fread(&bread,sizeof(short), 1, ppppp);
					fread(&cram,sizeof(int),1,ppppp);
					fread(&decide ,sizeof(long),1,ppppp);
					fread(&english,sizeof(long long), 1 ,ppppp);
					fread(&gril,sizeof(float), 1,ppppp);
					fread(&heiht,sizeof(double), 1,ppppp);
					fread(fawebs,sizeof(char),5,ppppp);
					fread(klnjdvgfsnkj,sizeof(short),5,ppppp);
					fread(fsdalk,sizeof(int),5,ppppp);
					fread(ufughjud,sizeof(long),5,ppppp);
					fread(dasklfjasdlkfja,sizeof(long long),5,ppppp);
					fread(dsklfnakflaslk,sizeof(float),5,ppppp);
					fread(lkfsafsalflk,sizeof(double),5,ppppp);
					numfsad--;
				}
}