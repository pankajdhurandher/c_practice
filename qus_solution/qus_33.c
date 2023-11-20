#include<stdio.h>
int ekke_number_sabbo_bar(){

    int number;
    printf("Enter the length of a square : ");
    scanf("%d",&number);
    for( int i = 0 ; i< number ; i++){
        for( int j = 0 ; j < number ; j++){
            if ( i <= j ){
                printf(" * ");
            }
        }
        printf("\n");
    }

}