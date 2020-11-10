#include <stdio.h>
#define MaxSize 10 // 定义线性表的最大长度
typedef struct
{
    int data[MaxSize]; // 顺序表的元素,ElemType
    int length;        // 顺序表的当前长度
} SqList;