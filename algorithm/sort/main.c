// Õ∞≈≈–Ú
 #include <stdio.h>
 int main() {
     int nums[11],i,j,t;
     for (i=0;i<=10;i++)
     nums[i]=0;
     for (i=0;i<5;i++)
     {
     printf("please input a number:");
     scanf("%d", &t);
     nums[t]++;
     }
     for (i=0;i<10;i++){
         for(j=1;j<=nums[i];j++) {
             printf("%d",i);
         }
     }
     getchar();
     return 0;
 }
