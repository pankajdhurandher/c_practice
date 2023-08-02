#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number1,number2;
    printf("\tSwap without using third variable\n");
    printf("Enter two number : ");
    scanf("%d%d",&number1,&number2);
    printf("\nNumber1 = %d",number1);
    printf("\nNumber2 = %d",number2);

    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    printf("\n\nFirst number = %d",number1);
    printf("\nSecond number = %d",number2);
}