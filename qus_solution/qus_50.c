#include<stdio.h>
int ekke_number_sabbo_bar(){
    printf("\tswap with using third variable \n");
    int number1,number2,swap_variable;
    printf("Enter the two numbers :");
    scanf("%d%d",&number1,&number2);
    printf("\nFirst number = %d",number1);
    printf("\nsecond number = %d",number2);

    swap_variable = number1;
    number1 = number2;
    number2 = swap_variable;

    printf("\nfirst number = %d",number1);
    printf("\nsecond number = %d",number2);


}