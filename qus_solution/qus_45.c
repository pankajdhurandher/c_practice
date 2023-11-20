#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number;
    printf("Enter a Prime number : ");
    scanf("%d",&number);
    if(number % 2 != 0 && number % 3 != 0 ){
        printf("%d is a Prime number ",number);
    } else{
        printf("%d is not a Prime number ",number);
    }
}