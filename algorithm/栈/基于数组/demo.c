#include <limits.h>
#include <stdio.h>
#define MAX_SIZE 100
/* ��������ʵ�ֵ�ջ */
typedef struct {
    int *data;
    int size;
} ArrayStack;

/* ���캯�� */
ArrayStack *newArrayStack() {
    ArrayStack *stack = malloc(sizeof(ArrayStack));
    // ��ʼ��һ������������������
    stack->data = malloc(sizeof(int) * MAX_SIZE);
    stack->size = 0;
    return stack;
}

/* �������� */
void delArrayStack(ArrayStack *stack) {
    free(stack->data);
    free(stack);
}

/* ��ȡջ�ĳ��� */
int size(ArrayStack *stack) {
    return stack->size;
}

/* �ж�ջ�Ƿ�Ϊ�� */
_Bool isEmpty(ArrayStack *stack) {
    return stack->size == 0;
}

/* ��ջ */
void push(ArrayStack *stack, int num) {
    if (stack->size == MAX_SIZE) {
        printf("stack is full.\n");
        return;
    }
    stack->data[stack->size] = num;
    stack->size++;
}

/* ����ջ��Ԫ�� */
int peek(ArrayStack *stack) {
    if (stack->size == 0) {
        printf("stack is empty.\n");
        return INT_MAX;
    }
    return stack->data[stack->size - 1];
}

/* ��ջ */
int pop(ArrayStack *stack) {
    if (stack->size == 0) {
        printf("stack is empty.\n");
        return INT_MAX;
    }
    int val = peek(stack);
    stack->size--;
    return val;
}
