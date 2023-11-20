#include<stdio.h>
int rectangle(){
    int a,b;
    printf("Enter the value of first side : ");
    scanf("%d",&a);
    printf("Enter he value of second side : ");
    scanf("%d5",&b);
    int rectangle_perimeter;
    rectangle_perimeter = 2*(a+b);
    printf("The perimeter of rectangle is %d",rectangle_perimeter);
    return 0;
}

