#include <stdio.h>
#include<stdlib.h>
//插入数组
void insert(int *nums,int size,int insert,int num){
    for (int i=size-1;i>insert;i--){
        nums[i] = nums[i-1];
    }
    nums[insert]=num;
}
//删除数组
void removeItem(int *nums, int size,int index){
    for (int i=index+1;i<size;i++){
        nums[i]=nums[i+1];
    }
}
/* 扩展数组长度 */
int *extend(int *nums, int size, int enlarge) {
    // 初始化一个扩展长度后的数组
    int *res = (int *)malloc(sizeof(int) * (size + enlarge));
    // 将原数组中的所有元素复制到新数组
    for (int i = 0; i < size; i++) {
        res[i] = nums[i];
    }
    // 初始化扩展后的空间
    for (int i = size; i < size + enlarge; i++) {
        res[i] = 0;
    }
    // 返回扩展后的新数组
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