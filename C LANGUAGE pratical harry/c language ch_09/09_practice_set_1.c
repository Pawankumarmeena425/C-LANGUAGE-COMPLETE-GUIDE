/*Create a two dimensional vector using structers in c*/
#include<stdio.h>
struct vector{
    int x;
    int y;
};
int main (){
    struct vector v1,v2;
    v1.x = 23;
    v1.y = 65;
    printf("x dim is %d and y dim is %d:::\n",v1.x,v1.y);

    v2.x = 83;
    v2.y = 45;
    printf("x dim is %d and y dim is %d:::\n",v2.x,v2.y);
return 0;
}