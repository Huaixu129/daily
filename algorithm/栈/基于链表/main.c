#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
typedef struct ListNode{
    int val;               // 节点的序号或者储存的数据
    struct ListNode *next; // 指向下一节点的指针
} ListNode; // 定义了一个名为ListNode的结构体，用于表示链表中的节点

/* 基于链表实现的栈 */
typedef struct {
    ListNode *top; // 将头节点作为栈顶
    int size;      // 栈的长度
} LinkedListStack;

/* 构造函数 */
LinkedListStack *newLinkedListStack() {
    LinkedListStack *s = malloc(sizeof(LinkedListStack));
    s->top = NULL;
    s->size = 0;
    return s;
}

/* 析构函数 */
void delLinkedListStack(LinkedListStack *s) {
    while (s->top) {
        ListNode *n = s->top->next;
        free(s->top);
        s->top = n;
    }
    free(s);
}

/* 获取栈的长度 */
int size(LinkedListStack *s) {
    assert(s);
    return s->size;
}

/* 判断栈是否为空 */
bool isEmpty(LinkedListStack *s) {
    assert(s);
    return size(s) == 0;
}

/* 访问栈顶元素 */
int peek(LinkedListStack *s) {
    assert(s);
    assert(size(s) != 0);
    return s->top->val;
}

/* 入栈 */
void push(LinkedListStack *s, int num) {
    assert(s);
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->next = s->top; // 更新新加节点指针域
    node->val = num;     // 更新新加节点数据域
    s->top = node;       // 更新栈顶
    s->size++;           // 更新栈大小
}

/* 出栈 */
int pop(LinkedListStack *s) {
    if (s->size == 0) {
        printf("stack is empty.\n");
        return INT_MAX;
    }
    assert(s);
    int val = peek(s);
    ListNode *tmp = s->top;
    s->top = s->top->next;
    // 释放内存
    free(tmp);
    s->size--;
    return val;
}
