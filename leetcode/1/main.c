#include <stdio.h>

// int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// int is_leap_year(int year) {
//     if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
//        return 1;  
//     return 0;
// }

// void add_days(int *day, int *month, int *year, int days_to_add) {
//     *day += days_to_add;
    
//     while(*day > days_in_month[*month]) {
//         *day -= days_in_month[*month];
//         if(++*month == 13) {  
//             *month = 1;
//             (*year)++;
//         }
//         if(*month == 2)  
//             days_in_month[2] = is_leap_year(*year) ? 29 : 28;
//     }
// }

// int main() {
//     int day = 11;
//     int month = 6;
//     int year = 2022;
    
//     printf("Today's date is %02d/%02d/%04d.\n", day, month, year);
    
//     int n;
//     printf("Enter the number of days to add: ");
//     scanf("%d", &n);
    
//     add_days(&day, &month, &year, n);
//     printf("After adding %d days, the date is %02d/%02d/%04d.\n", n, day, month, year);
    
//     return 0;
// }
int isrunyear(int year){
    if (year%4==0&&year%100!=0||year%400==0)
        return 1;
    return 0;
}
int dayin_month[12]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void CalculateDate(int year, int month, int day,int add_day) {
    day += add_day;
    while(day>dayin_month[month]){
        day-=dayin_month[month];
        if(++month==13){
            year++;
            month=1;
        }
        if(month==2){
            month=isrunyear?29:28;
        }
    }
    printf("%4d %2d %2d",year,month,day);
}
int main(){
    CalculateDate(2022,6,11,142);
    return 0;
}