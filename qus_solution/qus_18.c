#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    for( int x = 1 ; x <=number ; x++ ){
        for( int y = 1 ; y<=x ; y++){
            if(x==y){
                printf(" * ");
                printf(" \n");
            }
            else {
                printf(" * ");
            }
        }

    }
}

