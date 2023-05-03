#include <stdio.h>
#include <stdlib.h>

typedef struct linknode{
	int num;
	struct linknode *next;
}link;

link* my_scanf(){//输入函数
	link* first = NULL;
	first = malloc(sizeof(link));
	link* head = NULL;
	head = first;
	int n;
	scanf("%d",&n);
	if(n == -1){
		first->num = 0;
		first->next = NULL;
		return first;
	}else{
		while(n != -1){
			first->num = n;
			first->next = malloc(sizeof(link));
			first = first->next;
			scanf("%d",&n);
			
		}
		return head;
	}
}
link *my_delete(link*Bhead,link*B){//删除函数
	link *tmp = Bhead,*tmp2;
	if(Bhead == B){
		return Bhead->next;
	}else{
		while(tmp != B){
			tmp2 = tmp;
			tmp = tmp->next;
		}
		tmp2->next = tmp->next;
		return Bhead;
	}
}
link* my_insert(link*Ahead,link*B){//插入函数
	link *A = Ahead;
	if(A->next == NULL){
		link *tmp;
		tmp = Ahead;
		Ahead = B;
		B->next = tmp;
		return Ahead;
	}else{
		while(A->next != NULL){
			if((A->num < B->num&&B->num <A->next->num)||A->next->num == 0&&A->num < B->num){
				link*tmp = A->next;
				A->next = B;
				B->next = tmp;
				break;
			}
			A = A->next;
		}
		return Ahead;
	}	
}
int equal(int a,int *b,int n){//判断是否相等函数
	int i = 0,j = 0;
	while(i<n){
		if(a == b[i]){
			j++;
		}
		i++;
	}
	if(j == 0){
		return 0;
	}else{
		return 1;
	}
}
void my_free(link *p){//释放函数
	link *temp;
	while(p->next != NULL){
		temp = p;
		p = p->next;
		free(temp);
	}
}
void my_printf(link *P,char A){//打印函数
	link *p2 = P;
	if(p2->num != 0){
		printf("The new list %c:",A);
		while(p2->next != NULL){
			printf("%d ",p2->num);
			p2 = p2->next;
		}
		printf("\n");
	}else{
		printf("There is no item in %c list.\n",A);
	}
	my_free(P);
}
int main() {
	
	link* Ahead = my_scanf();
	link* Bhead = my_scanf();
	if(Bhead->next != NULL){
		if(Bhead->num < Ahead->num){
			link *tmp = Ahead;
			link *tmp2 = Bhead;
			Bhead = Bhead->next;
			Ahead = tmp2;
			Ahead->next = tmp;
		}}
	link* pB = Bhead,*pA = Ahead;
	int i=0,j = 0;
	while(pA->next != NULL){
		i++;
		pA = pA->next;
	}
	pA = Ahead;
	int a[i];
	while(pA->next != NULL){
		a[j] = pA->num;
		pA = pA->next;
		j++;
	}//定义一个数组存A的值
	while(pB->next != NULL){
			if(equal(pB->num, a,i)){//相等
				pB = pB->next;//跳过
			}else{//不相等，插入
				link *p = pB;
				pB = pB->next;
				Bhead = my_delete(Bhead,p);//先删
				Ahead = my_insert(Ahead,p);//后插
			}
		}
		char A ='A',B = 'B';
		my_printf(Ahead,A);
		my_printf(Bhead,B);
	return 0;
}