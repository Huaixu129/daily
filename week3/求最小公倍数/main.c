#include <stdio.h>
int haha(int n1,int n2){
    n1,n2 = n1<n2?n1,n2:n2,n1;
    for(int i=1;i<=n2;i++){
        if ((n1*i)%n2==0)
        return n1*i;
    }
}
int main() {
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("%d",haha(n1,n2));
    return 0;
}