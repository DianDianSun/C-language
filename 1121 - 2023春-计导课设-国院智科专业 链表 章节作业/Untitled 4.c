#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
int main() 
{
    struct node *head, *p;
    int max=1, min=1, sum = 0, num;
    // 创建头节点
    head = (struct node*) malloc(sizeof(struct node));
    head->next = NULL;
    // 读入正整数序列并存储到链表中
    scanf("%d", &num);
    while (num != -1) {
        // 创建新节点
        p = (struct node*) malloc(sizeof(struct node));
        p->data = num;
        p->next = head->next;
        head->next = p;
        // 更新最大值、最小值和元素之和
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
        sum += num;
        scanf("%d", &num);
    }
    // 输出结果
    printf("The maximum,minmum and the total are:%d %d %d", max, min, sum);
    return 0;
}