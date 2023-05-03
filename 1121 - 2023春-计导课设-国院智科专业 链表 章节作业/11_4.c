#include <stdio.h>
#include <stdlib.h>

typedef struct linknode{
	
	int num;
	struct linknode *next;
}link;

int main() {
	
	link *first = malloc(sizeof(link));
	int n,max,min,sum = 0;
	scanf("%d",&n);
	first->next = NULL;
	link *p = first;
	while(n != -1){
		p->num = n;
		p->next = malloc(sizeof(link));
		p = p->next;
		scanf("%d",&n);
	}
	max = first->num;
	min = first->num;
	while((first->next) != NULL){
		sum = sum + first->num;
		if((first->num)>max){
			max =first->num;
		}
		if((first->num)<min){
			min =first->num;
		}
		first = first->next;
	}
	printf("The maximum,minmum and the total are:%d %d %d",max,min,sum);

	
	return 0;
}