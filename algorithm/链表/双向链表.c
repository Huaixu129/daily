#include <stdio.h>
/* ˫������ڵ�ṹ�� */
typedef struct ListNode {
    int val;               // �ڵ�ֵ
    struct ListNode *next; // ָ���̽ڵ��ָ��
    struct ListNode *prev; // ָ��ǰ���ڵ��ָ��
} ListNode;

/* ���캯�� */
ListNode *newListNode(int val) {
    ListNode *node;
    node = (ListNode *) malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    node->prev = NULL;
    return node;
}
