#include <stdio.h>
#include <string.h>
int main() {
    char word[7][10]={"banana", "apple", "orange", "grape", "cherry","quilt","quilted"};
    for (int i=0;i<6;i++){
        for (int j=0;j<6-i;j++){
            if(strcmp(word[j],word[j+1])>0){
                char temp[10];
                strcpy(temp,word[j]);
                strcpy(word[j],word[j+1]);
                strcpy(word[j+1],temp);
            }
        }
    }
    for(int i=0;i<7;i++){
        printf("%s\n",word[i]);
    }
}