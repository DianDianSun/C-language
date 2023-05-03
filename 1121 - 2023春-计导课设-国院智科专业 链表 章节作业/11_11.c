q#include <stdio.h>
#include <stdlib.h>

typedef struct a{
	int num;
	struct a *next;
}link;

link *my_scanf(){
	link*head = malloc(sizeof(link));
	int n;
	link *p = head;
	p->next = NULL;
	scanf("%d",&n);
	while(n != -1){
		p->num = n;
		p->next = malloc(sizeof(link));
		p = p->next;
		scanf("%d",&n);
	}
	return head;
}
void my_free(link *head){
	link *p = NULL;
	while(head->next != NULL){
		p = head;
		head = head->next;
		free(p);
	}
}

int main() {
	
	link *Ahead = my_scanf();
	link *Bhead = my_scanf();
	link *A = Ahead,*B = Bhead;
	int i = 0,k = 0;
	while(A->next != NULL){
		if(A->num == Bhead->num){
			i++;
			break;		
		}
		A = A->next;
	}
	
	while(B->next){
		k++;
		B = B->next;
	}
	B = Bhead;
	if(i){
		int j = 0;
		while(B->next != NULL){
			if(A->num == B->num){
				j++;
			}
			A = A ->next;
			B = B->next;
		}
		if(j == k){
			printf("ListB is the sub sequence of ListA.");
		}else{
			printf("ListB is not the sub sequence of ListA.");
		}
	}else{
		printf("ListB is not the sub sequence of ListA.");
	}
	my_free(Ahead);
	my_free(Bhead);
	return 0;
}