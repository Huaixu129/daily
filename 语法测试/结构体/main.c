#include <stdio.h>
#include <string.h>
#define NAME_LEN 64
struct student
{
    char name[NAME_LEN];
    int age;
    int gender;
    double weight;
    long schols;
};
typedef struct student1{
    char name[NAME_LEN];
    int age;
    int gender;
    double weight;
    long schols;
} Student1;        //相当于用Student1替换了struct student1
void hiroko(struct student *std){
    if(std->weight> 80) std->weight = 80;//也可以是(*std).weight
    if(std->schols<2000) std->schols = 20000;
}
void hiroko1(Student1 *std){
    if(std->weight> 80) std->weight = 80;//也可以是(*std).weight
    if(std->schols<2000) std->schols = 20000;
}
int main()
{
    struct student huaixu;
    strcpy(huaixu.name, "huaixu");
    huaixu.gender = 1;
    huaixu.schols = 15000;
    huaixu.weight = 59.5;
    huaixu.age = 18;
    struct student HUAIXU = {"HUAIXU", 18, 1, 59.5, 15000};
}