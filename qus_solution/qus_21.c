#include<stdio.h>
int ekke_number_sabbo_bar(){
int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    for( int i = 0; i<= number ; i++){
        for( int j = 0 ; j< 2*(number - i) ; j++){
            printf(" ");
        }
        for( int k = 0 ; k < (2*i - 1 ) ; k++){
            printf(" *");
        }
        printf("\n");
    }

}