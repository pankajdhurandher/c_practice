#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number ;
    printf("Enter a number : ");
    scanf("%d",&number);
    for( int i = 0 ; i < number ; i++){
        for( int j = 0 ; j < (i) ; j++){
            printf(" ");

        }
        printf("***** ");
        printf("\n");
    }
}