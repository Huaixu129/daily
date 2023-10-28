#include <stdio.h>
int main()
{
    int nums[] = {23, 53, 65, 86, 34, 76};
    insertSort(nums , 6);
}
void insertSort(int nums[], int size)
{
    int i, j, key;
    for (i = 1; i < 6; i++)
    {
        key = nums[i];
        j = i - 1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
    for (i=0;i<6;i++){
        printf("%d ",nums[i]);
    }
}