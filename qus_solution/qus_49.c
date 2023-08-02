#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number , p , reverse = 0 ;
    printf("Enter a number : ");
    scanf("%d",&number);
     while(number>0){
        p = number%10;
        reverse = reverse*10 + p;
        number = number/10;
     }
    printf("\nreverse of a number is = %d",reverse);
}