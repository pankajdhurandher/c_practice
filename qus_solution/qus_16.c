#include<stdio.h>
int ekke_number_sabbo_bar(){

    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number%2 != 0 && number%3 != 0){
            printf("\nIts a prime number ");
        }
    else if (number ==2 || number ==3){
        printf("Its a prime number");
    }

    else{
        printf("Its not a prime number");
    }


}