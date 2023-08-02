#include<stdio.h>
float avg_of_3() {
    float a, b, c;
    printf("\t\tAvg. of three numbers\n");
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f",&b);
    printf("Enter last number : ");
    scanf("%f",&c);
    float sum = (a+b+c);
    printf("The avg is : %f",sum/3);
}