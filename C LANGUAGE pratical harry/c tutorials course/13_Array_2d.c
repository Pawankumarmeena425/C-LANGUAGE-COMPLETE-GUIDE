#include<stdio.h>

int main (){
    int marks[2][4]= {{2,4,5,3},
                      {33,3,6,3}};
    for (int  i = 0; i <2; i++)
    {
        for (int j = 0; j <4; j++)
        {
            printf("%d  ",marks[i][j]);
        }
        printf("\n");
    }
    
return 0;
}