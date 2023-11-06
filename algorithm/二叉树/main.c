#include <stdio.h>

/* �������ڵ�ṹ�� */
typedef struct TreeNode
{
    int val;                // �ڵ�ֵ
    int height;             // �ڵ�߶�
    struct TreeNode *left;  // ���ӽڵ�ָ��
    struct TreeNode *right; // ���ӽڵ�ָ��
} TreeNode;

/* ���캯�� */
TreeNode *newTreeNode(int val)
{
    TreeNode *node;

    node = (TreeNode *)malloc(sizeof(TreeNode));
    node->val = val;
    node->height = 0;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main()
{
    /* ��ʼ�������� */
    // ��ʼ���ڵ�
    TreeNode *n1 = newTreeNode(1);
    TreeNode *n2 = newTreeNode(2);
    TreeNode *n3 = newTreeNode(3);
    TreeNode *n4 = newTreeNode(4);
    TreeNode *n5 = newTreeNode(5);
    // ��������ָ�򣨼�ָ�룩
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;

    /* ������ɾ���ڵ� */
    TreeNode *P = newTreeNode(0);
    // �� n1 -> n2 �м����ڵ� P
    n1->left = P;
    P->left = n2;
    // ɾ���ڵ� P
    n1->left = n2;
    return 0;
}