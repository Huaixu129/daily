#include <stdio.h>
#include <string.h>
int main(){
    char numsMin[]="2014/09/06";
    char numsMax[]= "1814/09/06";
    char name[6],max[6],min[6];
    char age[12];
    int N;scanf("%d",&N);int count=0;
    for (int i=0;i<N;i++){
        scanf("%s %s",name,age);
        if(strcmp(age,"1814/09/06")<0||strcmp(age,"2014/09/06")>0){
            count++;
            continue;
        }
        if(strcmp(age,numsMax)>0){
            strcpy(min,name);
            strcpy(numsMax,age);
        }
        if(strcmp(age,numsMin)<0){
            strcpy(max,name);
            strcpy(numsMin,age);
        }
    }
    if(count==N){
        printf("0");
    }else{
            printf("%d %s %s",N-count,max,min);
        }
        return 0;
}