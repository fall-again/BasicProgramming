#define InitSize 10 // 表长度的初始定义
typedef struct
{
    int *data;           // 指示动态分配数组的指针,ElemType是数据类型，如int，double等
    int MaxSize, length; // 顺序表的最大容量和当前长度
} SeqList;