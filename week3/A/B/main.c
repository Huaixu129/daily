// #include<stdio.h>
// void swap(int *a,int *b){
//     if(b>a){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     }
// }
// int main() {
//     int n;
//     while (scanf("%d",&n)!=EOF){
//         int a,b;
//         for(int i=0;i<n;i++){
//             scanf("%d%d",&a,&b);
//             swap(&a,&b);
//             printf("%d %d",a,b);
//         }
//     }
//     return 0;
// }
#include <stdio.h>

void swap(int *a, int *b) {
    if (*b>*a){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int a, b;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &a, &b);
            swap(&a, &b);
            if (a%b==0)
                printf("YES");
            else
                printf("NO");
        }
    }
    return 0;
}
