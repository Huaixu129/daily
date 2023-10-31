#include <stdio.h>
//阶乘
// int factorial(int n){
//     if (n>0){
//         return n*factorial(n-1);
//     }else{
//         return 1;
//     }
// }
// int main(){
//     printf("%d",jiecheng(5));
//     return 0;
// }
//组合数
// int combination(int n, int r)
// {
//     if (n==r||r==0){
//         return 1;
//     }else if(r==1){
//         return n;
//     }else{
//         return combination(n-1,r-1) + combination(n-1,r);
//     }
// }
// int main()
// {
//     int result = combination(7,3);
//     printf("%d",result);
//     return 0;
// }
//辗转相除法
// int gcd(int x,int y){
//     if (x%y==0){
//         return y;
//     }else{
//         return gcd(y,x%y);
//     }
// }
// int main() {
//     printf("%d",gcd(32,24));
//     return 0;
// }
//斐波那契数列
int fib(int n){
    if (n==1||n==2)
        return (n-1);
    int res = fib(n-2)+fib(n-1);
    return res;
}
int main() {
    printf("%d",fib(5));
    return 0;
}