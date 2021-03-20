/*
 * @Description: 
 * @Author: HZQ
 * @Date: 2020-12-11 19:26:21
 * @LastEditTime: 2020-12-11 19:55:30
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode, *LinkList;

bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode));
    if (L == NULL)
    {
        return false;
    }
    L->next = NULL;
    return true;
}

/*
    在第i个位置插入元素e 带头结点
*/
bool ListInsert(LinkList &L, int i, int e)
{
    if (i < 1)
    {
        return false; // i值不合法
    }
    LNode *p;  // 指针p指向当前扫描到的结点
    int j = 0; // 当前p指向的第几个结点
    p = L;     // L指向头结点，头结点是第0个结点，不存数据

    while (p != NULL && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (p == NULL)
    {
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

int main(void)
{
    LinkList L;
    InitList(L);
    return 0;
}