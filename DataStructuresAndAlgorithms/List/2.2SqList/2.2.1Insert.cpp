/*
 * @Description: ���Ա��Ļ�������--����;�����þ�̬��ʵ�ֵ�
 * @Author: HZQ
 * @Date: 2020-11-16 20:57:10
 * @LastEditTime: 2020-11-20 19:05:33
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

bool ListInsert(SqList &L, int i, int e)
{
    /* �ж��Ƿ���Բ���Ԫ�أ���ǿ����׳��*/
    if (i < 1 || i > L.length + 1)
        return false; /* �ж�i�ķ�Χ�Ƿ���Ч*/
    if (L.length >= MaxSize)
        return false; /* ��ǰ�洢�ռ����������ܲ���*/
    /* ����i��Ԫ�ص�ֵ����� */
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
    SqList L;
    InitList(L);

    for (int i = 0; i < L.length; i++)
    {
        printf("L.data[%d]=%d\n", i, L.data[i]);
    }
    printf("L.length=%d\n", L.length);
    printf("----------------------\n");

    bool result = ListInsert(L, 5, 5);

    if (result == true)
        printf("����ɹ�\n");
    if (result == false)
        printf("����ʧ��\n");

    for (int i = 0; i < L.length; i++)
    {
        printf("L.data[%d]=%d\n", i, L.data[i]);
    }
    printf("L.length=%d\n", L.length);

    getchar();
    return 0;
}