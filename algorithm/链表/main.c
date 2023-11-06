#include <stdio.h> // �����׼���������

/* ����ڵ�ṹ�� */
typedef struct ListNode{
    int val;               // �ڵ����Ż��ߴ��������
    struct ListNode *next; // ָ����һ�ڵ��ָ��
} ListNode; // ������һ����ΪListNode�Ľṹ�壬���ڱ�ʾ�����еĽڵ�

/* ���캯�� */
ListNode *newListNode(int val) {
    ListNode *node; // ��������ָ��ListNode��ָ�룬node��next
    node = (ListNode *) malloc(sizeof(ListNode)); // Ϊnode�����ڴ�ռ䣬��СΪһ��ListNode�ṹ��Ĵ�С
    node->val = val; // ����node��ֵΪ����Ĳ���val
    node->next = NULL; // ����node��nextָ��ΪNULL����ʾ������������һ���ڵ�
    return node; // ���ش����Ľڵ�
} // ����һ�����캯�������ڴ���һ���µ�����ڵ㣬��������ֵ��nextָ��

/* ������Ľڵ� n0 ֮�����ڵ� P */
void insert(ListNode *n0, ListNode *P) {
    ListNode *n1 = n0->next;
    P->next = n1;
    n0->next = P;
}

/* ɾ������Ľڵ� n0 ֮����׸��ڵ� */
// ע�⣺stdio.h ռ���� remove �ؼ���
void removeItem(ListNode *n0) {
    if (!n0->next)
        return;
    // n0 -> P -> n1
    ListNode *P = n0->next;
    ListNode *n1 = P->next;
    n0->next = n1;
    // �ͷ��ڴ�
    free(P);
}

/* ��������������Ϊ index �Ľڵ� */
ListNode *access(ListNode *head, int index) {
    while (head && head->next && index) {      //index=0;������
        head = head->next;
        index--;
    }
    return head;
}

/* �������в���ֵΪ target ���׸��ڵ� */
int find(ListNode *head, int target) {
    int index = 0;
    while (head) {
        if (head->val == target)
            return index;
        head = head->next;
        index++;
    }
    return -1;
}


int main() {
/* ��ʼ������ 1 -> 3 -> 2 -> 5 -> 4 */
// ��ʼ�������ڵ�
ListNode* n0 = newListNode(1);
ListNode* n1 = newListNode(3);
ListNode* n2 = newListNode(2);
ListNode* n3 = newListNode(5);
ListNode* n4 = newListNode(4);
// ��������ָ��
n0->next = n1;
n1->next = n2;
n2->next = n3;
n3->next = n4;
return 0;
}