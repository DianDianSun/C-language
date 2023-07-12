


#include <stdio.h>
#include <stdlib.h>
typedef struct a{
	int num;
	struct a *next;
}link;
link *my_scanf(){
	link *fhead = malloc(sizeof(link));
	link *head = fhead;
	head->next = NULL;
	int n;
	scanf("%d",&n);
	while(n != -1){
		head->num = n;
		head->next = malloc(sizeof(link));
		head = head->next;
		scanf("%d",&n);
	}
	return fhead;
}
void my_free(link *head){
	link *tmp;
	while(head->next !=NULL){
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
link *caputure(link *head,int n){
	int b = 1;
	while(head->next != NULL){
		if(n == b){
			break;
		}
		head = head->next;
		b++;
	}
	return head;
}
int main() {
	
	link *head = malloc(sizeof(link));
	head->num = 0;
	head->next = my_scanf();
	int s1,t1,s2,t2;
	scanf("%d %d %d %d",&s1,&t1,&s2,&t2);
	link *head1 = caputure(head,s1);
	link *end1 = caputure(head,t1);
	link *head2 = caputure(head,s2);
	link *end2 = caputure(head,t2);
	link *zhead1 = head1->next,*zhead2 = head2->next,*zend1 = end1->next->next,*zend2 = end2->next->next,*pend1 = end1->next,*pend2 = end2->next;
	if(s2 -t1 == 1){
		head1->next = zhead2;
		pend2->next = zhead1;
		pend1->next = zend2;
	}else{
		head1->next = zhead2;
		pend2->next = zend1;
		head2->next = zhead1;
		pend1->next = zend2;
	}
	link *print = head->next;
	printf("The new list is:");
	while(print->next != NULL){
		printf("%d ",print->num);
		print = print->next;
	}
	my_free(head);
	return 0;
}

你好，兄弟，这个已经真的搞不了了，你把《你能能拿到的钱退我百分之20》说实话，已经搞一天了，确实挺辛苦的，本来想是全退的但是真不容易。我们这个oj平台很奇怪，很多同学都会变黄因为内存，时间上的事。考虑到商家，不能降低你在商家那的信誉，我觉得我这个办法是最合理的，加一下我的qq
	2294469672