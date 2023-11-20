#include<stdio.h>
int  ekke_number_sabbo_bar(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    for( int i = 0 ;i<= number ; i++){
        for( int j = 0 ; j <= 2*i ; j++){
            printf(" ");
        }
        int x;
        x = ( 1 + (number - 1)*2);
        for( int k = 0 ; k < ( x - 2*i); k++){
            printf("* ");
        }
        printf("\n");
    }
}