#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node* next;
};

int main()
{
 int i,num;
 struct node* head = (struct node* )malloc(sizeof(struct node));
  head->next = malloc(sizeof(struct node));
 struct node*p = head->next;
    p->next = NULL;
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        p->data = num;
        p->next = malloc(sizeof(struct node));
        p = p->next;
    }
 int s1,t1,s2,t2;
 scanf("%d %d %d %d",&s1,&t1,&s2,&t2);
  s1++;t1++;s2++;t2++;
 if(s1<=t1 && s2<=t2 && t1<s2)
 {
  struct node* p1 = head;
  struct node* p2 = head;
  struct node* head1 = NULL;
  struct node* head2 = NULL;
  struct node* temp = NULL,*prehead1 = NULL,*prehead2 = NULL;
  
  for(i=1;i<s1;i++)
  {
   prehead1 = p1;
   p1 = p1->next;
  }
    head1 = prehead1->next;
    p1 = head;
  for(i=1;i<t1;i++)
  {
   p1 = p1->next;
  }
  for(i=1;i<s2;i++)
  {
   prehead2 = p2;
   p2 = p2->next;
  }
    head2 = prehead2->next;
    p2 = head;
  for(i=1;i<t2;i++)
  {
   p2 = p2->next;
   }
    prehead1->next = head2;
    temp = p2->next;
    p2->next = p1->next;
    prehead2->next = head1;
    p1->next = temp;
 }
 else
 {
  return 0;
 }
 printf("The new list is:");
  head = head->next;
  while(head->next != NULL){
    printf("%d ",head->data);
    head = head->next;
  }
    return 0;
}