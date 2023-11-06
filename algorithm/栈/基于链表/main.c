#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct ListNode{
    int val;               // �ڵ����Ż��ߴ��������
    struct ListNode *next; // ָ����һ�ڵ��ָ��
} ListNode; // ������һ����ΪListNode�Ľṹ�壬���ڱ�ʾ�����еĽڵ�

/* ��������ʵ�ֵ�ջ */
typedef struct {
    ListNode *top; // ��ͷ�ڵ���Ϊջ��
    int size;      // ջ�ĳ���
} LinkedListStack;

/* ���캯�� */
LinkedListStack *newLinkedListStack() {
    LinkedListStack *s = malloc(sizeof(LinkedListStack));
    s->top = NULL;
    s->size = 0;
    return s;
}

/* �������� */
void delLinkedListStack(LinkedListStack *s) {
    while (s->top) {
        ListNode *n = s->top->next;
        free(s->top);
        s->top = n;
    }
    free(s);
}

/* ��ȡջ�ĳ��� */
int size(LinkedListStack *s) {
    assert(s);
    return s->size;
}

/* �ж�ջ�Ƿ�Ϊ�� */
_Bool isEmpty(LinkedListStack *s) {
    assert(s);
    return size(s) == 0;
}

/* ����ջ��Ԫ�� */
int peek(LinkedListStack *s) {
    assert(s);
    assert(size(s) != 0);
    return s->top->val;
}

/* ��ջ */
void push(LinkedListStack *s, int num) {
    assert(s);
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->next = s->top; // �����¼ӽڵ�ָ����
    node->val = num;     // �����¼ӽڵ�������
    s->top = node;       // ����ջ��
    s->size++;           // ����ջ��С
}

/* ��ջ */
int pop(LinkedListStack *s) {
    if (s->size == 0) {
        printf("stack is empty.\n");
        return INT_MAX;
    }
    assert(s);
    int val = peek(s);
    ListNode *tmp = s->top;
    s->top = s->top->next;
    // �ͷ��ڴ�
    free(tmp);
    s->size--;
    return val;
}
