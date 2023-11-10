// #include <stdio.h>
// #include <string.h>
// #define N 101
// int main()
// {
//     int n,i,r,j,flag = 0,mark[N];//flag作为标记以控制输出格式
//     scanf("%d",&n);
//     memset(mark,-1,sizeof(mark));//mark数组初始化为-1
//     for(i = 0; i < n; i++){
//         scanf("%d",&r);
//         mark[r] = 0;//输入以数组下标形式存入数组mark
//     }
//     for(r = 2; r <= 100; r++){
//         j = r;
//         if(mark[j] == 0){
//             do{
//                 if(j % 2 == 0){
//                     //下面的if条件中加上j < 100是为了
//                     //防止数组下标越界
//                     j /= 2;
//                     if(j<100){
//                        mark[j] = 1;
//                     }
//                 }
//                 else{
//                     j = 3 * j + 1;
//                 }
//             }while(j != 2);
//         }
//     }
//     for(i = 100; i > 1; i--){
//         //flag==0时为第一次输出数据，其前面不需加空格
//         //flag==1时为第二次以上输出数据，前面加一空格
//         if((mark[i] == 0)&&(flag == 0)){
//             printf("%d",i);
//             flag = 1;
//         }
//         else if((mark[i] == 0)&&(flag == 1)){
//             printf(" %d",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }
