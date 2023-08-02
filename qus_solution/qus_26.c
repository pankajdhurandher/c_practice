#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    for( int i = 0 ; i<=number ; i++){
        for( int j = 0 ; j<(number - i) ; j++){
            printf(" ");
        }
        for( int k = 0 ; k<=i ; k++){
            printf(" * ");
        }
        printf("\n");
    }
    for( int x = 0 ; x<= number ; x++){
        for( int y = 0 ; y <= x ; y++){
            printf(" ");
        }
        for( int z = 0 ; z<(number -x) ; z++){
            printf(" * ");
        }
        printf("\n");
    }
}