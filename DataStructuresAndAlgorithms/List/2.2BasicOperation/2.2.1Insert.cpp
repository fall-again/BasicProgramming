/*
 * @Description: 线性表的基本操作--插入;都是用静态表实现的
 * @Author: HZQ
 * @Date: 2020-11-16 20:57:10
 * @LastEditTime: 2020-11-18 21:26:17
 */

#include <stdio.h>
#define MaxSize 10
typedef struct
{
    int data[MaxSize];
    int length;
} Sqlist;

void InitList(Sqlist &L)
{
    for (int i = 0; i < MaxSize; i++)
    {
        L.data[i] = 0;
    }
    L.length = 0;
}

void Insert(Sqlist &L)
{
    for (int i = 0; i < MaxSize; i++)
    {
        L.data[i] = i;
    }
}

int main(void)
{
    Sqlist L;
    InitList(L);
    Insert(L);
    for (int i = 0; i < L.length; i++)
    {
        printf("L.data[%d]=%d\n", i, L.data[i]);
    }
    getchar();
    return 0;
}