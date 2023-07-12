#include<stdio.h>
#include<stdlib.h>
 
typedef struct link {
    int data;
    struct link* next;
}Link;
 
int main(void)
{
    int a = 0, max    , min, sum = 0;
    Link* head, * ptr;
    head = (Link*)malloc(sizeof(Link));
    ptr = head;
    head->next = NULL;
    scanf("%d", &a);
    getchar();
    while (a != -1)
    {
        ptr->next = (Link*)malloc(sizeof(Link));
        ptr = ptr->next;
        ptr->data = a;
        ptr->next = NULL;
        scanf("%d", &a);
        getchar();
    }
    for (ptr = head->next; ptr != NULL; ptr = ptr->next)
    {
        if (ptr->data >= max)
            max = ptr->data;
        if (ptr->data <= min)
            min = ptr->data;
        sum += ptr->data;
    }
 
    Link* p = head;
    for (ptr = head->next; ptr != NULL; ptr = ptr->next)//释放空间
    {
        free(p);
        p = ptr;
    }
    printf("The maximum,minmum and the total are:%d %d %d", max, min, sum);
    return 0;
}
