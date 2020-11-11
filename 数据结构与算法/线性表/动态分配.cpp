#include <stdio.h>
#include <stdlib.h>
#define InitSize 10 /* 表顺序表的初始长度 */

typedef struct
{
    int *data;           /* 指示动态分配数组的指针，指向数据表第一个元素；ElemType是数据类型，如int，double等 */
    int MaxSize, length; /* 顺序表的最大容量和当前长度 */
} SeqList;               /* 顺序表的类型定义(动态分配方式) */

void InitList(SeqList &L)
{
    /* 用malloc函数申请一片连续的存储空间 */
    L.data = (int *)malloc(InitSize * sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}

/* 增加动态数组的长度 */
void IncreaseSize(SeqList &L, int len)
{
    int *p = L.data;
    L.data = (int *)malloc((L.MaxSize + len) * sizeof(int));
    for (int i = 0; i < L.length; i++)
    {
        L.data[i] = p[i]; /* 将数据复制到新区域 */
    }
    L.MaxSize = L.MaxSize + len;
    free(p);
}

int main()
{
    SeqList L;   /* 声明 */
    InitList(L); /* 初始化 */
    /* 之后随意插入几个元素 */

    IncreaseSize(L, 5);
    return 0;
}