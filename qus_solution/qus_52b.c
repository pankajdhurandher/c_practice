#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number1,number2;
    printf("\tSum of two number without using + operator \n");
    printf("Enter a number : ");
    scanf("%d",&number1);
    printf("\nEnter second number : ");
    scanf("%d",&number2);
    while(number1 !=0){
        number1--;
        number2++;
    }
    printf("\nSum is : %d",number2);
}