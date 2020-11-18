/*
 * @Description: 线性表的基本操作--插入;都是用静态表实现的
 * @Author: HZQ
 * @Date: 2020-11-16 20:57:10
 * @LastEditTime: 2020-11-18 22:20:54
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
    L.length = 0;
    for (int i = 0; i < 6; i++)
    {
        L.data[i] = i;
        L.length++;
    }
}

bool ListInsert(Sqlist &L, int i, int e)
{
    /* 判断是否可以插入元素，加强程序健壮性*/
    if (i < 1 || i > L.length + 1)
        return false; /* 判断i的范围是否有效*/
    if (L.length >= MaxSize)
        return false; /* 当前存储空间已满，不能插入*/
    /* 将第i个元素的值向后移 */
    for (int j = L.length; j >= i; j--)
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

int main(void)
{
    Sqlist L;
    InitList(L);
    for (int i = 0; i < L.length; i++)
    {
        printf("L.data[%d]=%d\n", i, L.data[i]);
    }
    printf("L.length=%d\n", L.length);
    printf("----------------------\n");
    bool result = ListInsert(L, 9, 5);
    if (result == true)
        printf("插入成功\n");
    if (result == false)
        printf("插入失败\n");

    for (int i = 0; i < L.length; i++)
    {
        printf("L.data[%d]=%d\n", i, L.data[i]);
    }
    printf("L.length=%d\n", L.length);
    getchar();
    return 0;
}