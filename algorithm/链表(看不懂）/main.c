#include <stdio.h> // �����׼���������

/* ����ڵ�ṹ�� */
typedef struct ListNode {
    int val;               // �ڵ�ֵ
    struct ListNode *next; // ָ����һ�ڵ��ָ��
} ListNode; // ������һ����ΪListNode�Ľṹ�壬���ڱ�ʾ�����еĽڵ�

/* ���캯�� */
ListNode *newListNode(int val) {
    ListNode *node, *next; // ��������ָ��ListNode��ָ�룬node��next
    node = (ListNode *) malloc(sizeof(ListNode)); // Ϊnode�����ڴ�ռ䣬��СΪһ��ListNode�ṹ��Ĵ�С
    node->val = val; // ����node��ֵΪ����Ĳ���val
    node->next = NULL; // ����node��nextָ��ΪNULL����ʾ������������һ���ڵ�
    return node; // ���ش����Ľڵ�
} // ����һ�����캯�������ڴ���һ���µ�����ڵ㣬��������ֵ��nextָ��
