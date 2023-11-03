#include <stdio.h>
struct xyz {
    int x;
    long y;
    double z;
};
struct xyz xyz_of(int x,long y,double z){
    struct xyz temp;
    temp.x= x;
    temp.y= y;
    temp.z= z;
    return temp;
}
int main() {
    xyz_of(1,2,3);d
}