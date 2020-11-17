#include <stdio.h>
#define MaxSize 10 /* 定义线性表的最大长度 */
typedef struct
{
    int data[MaxSize]; /* 顺序表的元素,ElemType */
    int length;        /* 顺序表的当前长度 */
} SqList;

/* 基本操作--初始化一个顺序表 */
void InitList(SqList &L)
{
    for (int i = 0; i < MaxSize; i++)
    {
        L.data[i] = 0; /* 将所有数据元素设置为默认初始值(可省略) */
    }
    L.length = 0; /* 顺序表初始长度为0(不能忽略) */
}

int main(void)
{
    SqList L;    /* 声明一个顺序表 */
    InitList(L); /* 调用函数，初始化顺序表 */
    return 0;
}