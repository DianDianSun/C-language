#include <stdio.h>
#include <stdlib.h>

typedef struct linknode{
	
	int num;
	struct linknode *next;
}link;


int main() {
	
	link *first = malloc(sizeof(link));
	int n,i=0;
	scanf("%d",&n);
	first->next = NULL;
	link *p = first;
	link *p2 = NULL;
	while(n != -1){
		i++;
		p->num = n;
		p->next = malloc(sizeof(link));
		p = p->next;
		scanf("%d",&n);
	}
	int a[i],j=0;
	link *p3 = first;
	while(p3->next != NULL){
		a[j] = p3->num;
		p3 = p3->next;
		j++;
	}
	for(int r=0;r<i-1;r++){
		for(int t = r+1;t<i;t++){
			if(a[r]>a[t]){
				int tep;
				tep = a[r];
				a[r] = a[t];
				a[t] = tep;
			}
		}
	}
	printf("The new list is:");
	for(int k = 0;k<i;k++){
		printf("%d ",a[k]);
	}
	while(first->next != NULL){
		p = first;
		first = first->next;
		free(p);
	}
	return 0;
}