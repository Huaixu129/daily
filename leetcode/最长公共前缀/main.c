#include <stdio.h>
char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize==0)
    return "";
    char*prefix=strs[0];
    for (int i=1;i<strsSize;i++){
        int j=0;
        while(strs[i][j]!='\0'&&prefix[j]!='\0'&&strs[i][j]==prefix[j])
        j++;
        prefix[j]='\0';
    }
    return prefix;
}
