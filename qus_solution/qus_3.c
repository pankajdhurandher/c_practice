#include<stdio.h>
float area_of_circle(){
    float radius;
    printf("\t\tArea of circle \n");
    printf("Enter a radious of a circle : ");
    scanf("%f",&radius);
    printf("The area of a circle is : %f ",3.14*radius*radius);
}