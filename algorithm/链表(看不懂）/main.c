#include <stdio.h> // 引入标准输入输出库

/* 链表节点结构体 */
typedef struct ListNode {
    int val;               // 节点值
    struct ListNode *next; // 指向下一节点的指针
} ListNode; // 定义了一个名为ListNode的结构体，用于表示链表中的节点

/* 构造函数 */
ListNode *newListNode(int val) {
    ListNode *node, *next; // 声明两个指向ListNode的指针，node和next
    node = (ListNode *) malloc(sizeof(ListNode)); // 为node分配内存空间，大小为一个ListNode结构体的大小
    node->val = val; // 设置node的值为传入的参数val
    node->next = NULL; // 设置node的next指针为NULL，表示这是链表的最后一个节点
    return node; // 返回创建的节点
} // 这是一个构造函数，用于创建一个新的链表节点，并设置其值和next指针
