/*
 * @Description: 线性表的基本操作--插入;都是用静态表实现的
 * @Author: HZQ
 * @Date: 2020-11-16 20:57:10
 * @LastEditTime: 2020-11-18 21:46:34
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
        L.data[i] = i;
    }
    L.length = 0;
}

void Insert(Sqlist &L)
{
    for (int i = 0; i < 5; i++)
    {
        L.data[i] = i;
    }
}

int main(void)
{
    Sqlist L;
    InitList(L);
    for (int i = 0; i < MaxSize; i++)
    {
        printf("L.data[%d]=%d\n", i, L.data[i]);
        L.length++;
    }
    printf("L.length=%d\n", L.length);
    getchar();
    return 0;
}