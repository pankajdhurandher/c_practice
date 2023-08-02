#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number,r = 1,sum = 0;
    printf("\tFactorial\n");
    printf("Enter a number : ");
    scanf("%d",&number);
    for(int i = 1 ; i <= number ; i++){
        r = r*i;

    }  sum = r;
    printf("\n Factorial of %d is = %d",number,sum);
}