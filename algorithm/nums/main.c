#include <stdio.h>
#include<stdlib.h>
//��������
void insert(int *nums,int size,int insert,int num){
    for (int i=size-1;i>insert;i--){
        nums[i] = nums[i-1];
    }
    nums[insert]=num;
}
//ɾ������
void removeItem(int *nums, int size,int index){
    for (int i=index+1;i<size;i++){
        nums[i]=nums[i+1];
    }
}
/* ��չ���鳤�� */
int *extend(int *nums, int size, int enlarge) {
    // ��ʼ��һ����չ���Ⱥ������
    int *res = (int *)malloc(sizeof(int) * (size + enlarge));
    // ��ԭ�����е�����Ԫ�ظ��Ƶ�������
    for (int i = 0; i < size; i++) {
        res[i] = nums[i];
    }
    // ��ʼ����չ��Ŀռ�
    for (int i = size; i < size + enlarge; i++) {
        res[i] = 0;
    }
    // ������չ���������
    return res;
}
int main(){
    int nums[6]={0,1,2,3,4,5};
    insert(nums,6,3,5);
    printf("%d\n",nums[3]);
    int Nums[5]={1,1,1,1,1};
    extend(Nums,5,3);
    printf("%d",sizeof(Nums)/sizeof(Nums[0]));
    return 0;
}