//Take a number(n) from user & output its cube(n*n*n)
#include<stdio.h>
int cube(){
    int cube_number;
    printf("\t\tcube of a number\n");
    printf("Enter a number :");
   scanf("%d",& cube_number);
    cube_number = cube_number*cube_number*cube_number;
    printf("the cube of a number is : %d",cube_number);
}