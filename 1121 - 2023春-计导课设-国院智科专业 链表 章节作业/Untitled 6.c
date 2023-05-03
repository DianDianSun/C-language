#include<stdio.h>
#include<stdlib.h>
struct node
{
 int num;
 struct node*next;
};
int main()
{
 struct node*head=NULL;
 struct node*p=head;
 int num;
 int max=1,min=999999999,sum=0,n=1000,i;
 head=(struct node*)malloc(sizeof(struct node));
 p=(struct node*)malloc(sizeof(struct node));
 head->next = NULL;
 for(i=1;i<=n;i++)
 {
  scanf("%d",&num);
  sum=sum+num;
  if(num==-1)
  {
   break;
  }
  else
  {
  p->num=num;
  p->next=NULL;
  if(head==NULL)
  {
   head=p;
  }
  else
  {
   struct node*current=head;
   while(current->next!=NULL)
   {
    current=current->next;
   }
   current->next=p;
  }
  if(num>max)
  max=num;
  if(num<min)
  min=num;
     }
 }
 free(p);
 printf("The maximum,minmum and the total are:%d %d %d",max,min,sum+1);
 return 0;
}