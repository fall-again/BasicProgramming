/*
 * @Description: 
 * @Author: HZQ
 * @Date: 2020-11-22 19:58:01
 * @LastEditTime: 2020-11-22 19:58:58
 */
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