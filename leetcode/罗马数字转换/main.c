#include <stdio.h>

// int romanToInt(char * s){
//     int num = 0;
//     while(*s){
//         if(*s == 'I' && *(s+1) != '\0'){
//             if(*(s+1) == 'V' || *(s+1) == 'X'){
//                 num -= 2;
//             }
//         }else if(*s == 'X' && *(s+1) != '\0'){
//             if(*(s+1) == 'L' || *(s+1) == 'C'){
//                 num -= 20;
//             }
//         }else if(*s == 'C' && *(s+1) != '\0'){
//             if(*(s+1) == 'D' || *(s+1) == 'M'){
//                 num -= 200;
//             }
//         }

//         switch(*s){
//             case 'I': num += 1; break;
//             case 'V': num += 5; break;
//             case 'X': num += 10; break;
//             case 'L': num += 50; break;
//             case 'C': num += 100; break;
//             case 'D': num += 500; break;
//             case 'M': num += 1000; break;
//         }
//         s++;
//     }
//     return num;
// }
int romanToInt(char* s){
    int values[26]={0};
    values['I'-'A'] = 1;
    values['V'-'A'] = 5;
    values['X'-'A'] = 10;
    values['L'-'A'] = 50;
    values['C'-'A'] = 100;
    values['D'-'A'] = 500;
    values['M'-'A'] = 1000;
    int prev = 0;int num;
    while(*s){     
        int curr = values[*s-'A'];
        if(curr>prev){
            num -=2*curr;
        }
        num+=curr;
        prev=curr;
        s++;
    }
    return num;
}
int main() {
    char roma[100];
    scanf("%s",roma);
    int s =  romanToInt(roma);
    printf("%d",s);
    return 0;
}
