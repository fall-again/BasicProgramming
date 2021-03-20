/*
 * @Description: ���Ա��������--ɾ��
 * @Author: HZQ
 * @Date: 2020-11-20 19:05:15
 * @LastEditTime: 2020-11-20 19:19:45
 */
#include <stdio.h>
#define MaxSize 10
typedef struct
{
    int data[MaxSize];
    int length;
} SqList;

void InitList(SqList &L)
{
    L.length = 0;
    for (int i = 0; i < 6; i++)
    {
        L.data[i] = i;
        L.length++;
    }
}

bool ListDelete(SqList &L, int i, int &e)
{
    /* �ж��Ƿ���Բ���Ԫ�أ���ǿ����׳��*/
    if (i < 1 || i > L.length + 1)
        return false; /* �ж�i�ķ�Χ�Ƿ���Ч*/

    e = L.data[i - 1];
    /* ����i��Ԫ�ص�ֵ��ǰ�� */
    for (int j = i; j < L.length; j++)
    {
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}

int main(void)
{
    SqList L;
    InitList(L);
    int e = 0;

    for (int i = 0; i < L.length; i++)
    {
        printf("L.data[%d]=%d\n", i, L.data[i]);
    }
    printf("L.length=%d\n", L.length);
    printf("----------------------\n");

    bool result = ListDelete(L, 4, e);

    if (result == true)
        printf("ɾ���ɹ�,ɾ����Ԫ��Ϊ%d\n", e);
    if (result == false)
        printf("ɾ��ʧ��\n");

    for (int i = 0; i < L.length; i++)
    {
        printf("L.data[%d]=%d\n", i, L.data[i]);
    }
    printf("L.length=%d\n", L.length);

    getchar();
    return 0;
}