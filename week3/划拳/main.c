#include <stdio.h>
void huaquan(int han1,int quan1,int han2,int quan2,int *x,int *y){
    if(quan1==han1+han2&&quan1!=quan2){
        (*x)++;
    }else if(quan2==han1+han2&&quan1!=quan2){
        (*y)++;
    }
}
int main() {
    int N;
    do {
        scanf("%d", &N);
    } while (N < 1 || N > 100);

    int x = 0, y = 0;

    for (int i = 0; i < N; i++) {
        int han1, quan1, han2, quan2;
        scanf("%d %d %d %d", &han1, &quan1, &han2, &quan2);
        huaquan(han1, quan1, han2, quan2, &x, &y);
    }

    printf("%d %d", y, x);

    return 0;
}
