#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number1,number2;
    printf("\tSum of two number without using + operator\n ");
    printf("Enter the first number : ");
    scanf("%d",&number1);
    printf("\nEnter second number : ");
    scanf("%d",&number2);
    for ( int i = 0 ; i < number2 ; i++){
        number1++;
    }
    printf("\n Sum of two number is = %d",number1);
}