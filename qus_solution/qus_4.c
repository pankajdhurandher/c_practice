#include<stdio.h>
float area_of_square (){
    float side;
    printf("\t\tArea of a square\n");
    printf("Enter a value od side : ");
    scanf("%f",& side);
    printf("The area of square is : %f", side*side);
}