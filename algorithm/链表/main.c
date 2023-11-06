#include <stdio.h> // 引入标准输入输出库

/* 链表节点结构体 */
typedef struct ListNode{
    int val;               // 节点的序号或者储存的数据
    struct ListNode *next; // 指向下一节点的指针
} ListNode; // 定义了一个名为ListNode的结构体，用于表示链表中的节点

/* 构造函数 */
ListNode *newListNode(int val) {
    ListNode *node; // 声明两个指向ListNode的指针，node和next
    node = (ListNode *) malloc(sizeof(ListNode)); // 为node分配内存空间，大小为一个ListNode结构体的大小
    node->val = val; // 设置node的值为传入的参数val
    node->next = NULL; // 设置node的next指针为NULL，表示这是链表的最后一个节点
    return node; // 返回创建的节点
} // 这是一个构造函数，用于创建一个新的链表节点，并设置其值和next指针

/* 在链表的节点 n0 之后插入节点 P */
void insert(ListNode *n0, ListNode *P) {
    ListNode *n1 = n0->next;
    P->next = n1;
    n0->next = P;
}

/* 删除链表的节点 n0 之后的首个节点 */
// 注意：stdio.h 占用了 remove 关键词
void removeItem(ListNode *n0) {
    if (!n0->next)
        return;
    // n0 -> P -> n1
    ListNode *P = n0->next;
    ListNode *n1 = P->next;
    n0->next = n1;
    // 释放内存
    free(P);
}

/* 访问链表中索引为 index 的节点 */
ListNode *access(ListNode *head, int index) {
    while (head && head->next && index) {      //index=0;结束；
        head = head->next;
        index--;
    }
    return head;
}

/* 在链表中查找值为 target 的首个节点 */
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
/* 初始化链表 1 -> 3 -> 2 -> 5 -> 4 */
// 初始化各个节点
ListNode* n0 = newListNode(1);
ListNode* n1 = newListNode(3);
ListNode* n2 = newListNode(2);
ListNode* n3 = newListNode(5);
ListNode* n4 = newListNode(4);
// 构建引用指向
n0->next = n1;
n1->next = n2;
n2->next = n3;
n3->next = n4;
return 0;
}