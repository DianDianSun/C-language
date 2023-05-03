#include <stdio.h>
#include <stdlib.h>

typedef struct a{
	char c[2];
	struct a *next;
}link;

link *my_scanf(){
	link *fhead = malloc(sizeof(link));
	link *head = fhead;
	head->next = NULL;
	char n[2];
	scanf("%s",n);
	while(n[0] != '-'|| n[1] != '1'){
		head->c[0] = n[0];
		head->next = malloc(sizeof(link));
		head = head->next;
		scanf("%s",n);
	}
	return fhead;
}
link *newthree(){
	link *newhead = malloc(sizeof(link));
	newhead->c[0] = 0;
	newhead->next = malloc(sizeof(link));
	newhead->next->c[0] = 0;
	newhead->next->next = NULL;
	return newhead;

}
link *my_insert(link *h,link*z){
	link *tmp = h;
	while(tmp->next != NULL){
		if((z->c[0] >= tmp->c[0]&& z->c[0] <= tmp->next->c[0])||(z->c[0] >= tmp->c[0]&&tmp->next->next == NULL)){
			link *tmp1 = tmp->next;
			tmp->next = z;
			z->next = tmp1;
			break;
		}
		tmp = tmp->next;
	}
	return h;
}
void my_printf(link *head,char A){
	head = head->next;
	if(head->next == NULL){
		printf("There is no item in %c list.\n",A);
	}else{
		printf("The list %c is: ",A);
		while(head->next != NULL){
			printf("%c ",head->c[0]);
			head = head->next;
		}
		printf("\n");
	}
}
void my_free(link *head){
	while(head->next != NULL){
		link *tmp = head;
		head = head->next;
		free(tmp);
	}
}
int main(){
	
	link *head = my_scanf();
	link *head1 = newthree(),*head2 = newthree(),*head3 = newthree();
	while(head->next != NULL){
		link *tmp = head;
		head = head->next;
		if((tmp->c[0] >= 65 && tmp->c[0] <= 90)||(tmp->c[0] >= 97 && tmp->c[0] <= 122)){
			head1 = my_insert(head1,tmp);
		}else if((tmp->c[0] >= 48 && tmp->c[0] <= 57)){
			head2 = my_insert(head2,tmp);
		}else{
			head3 = my_insert(head3,tmp);
		}
	}
	char A = 'A',C = 'C',B = 'B';
	free(head);
	my_printf(head1,A);
	my_printf(head2,B);
	my_printf(head3,C);
	my_free(head1);
	my_free(head2);
	my_free(head3);
	return 0;
}