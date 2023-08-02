#include<stdio.h>
int  ekke_number_sabbo_bar(){
    int number;
    printf("enter a number : ");
    scanf("%d",&number);
    for( int x = 1 ; x<= number ; x++){
        int sum = 0;
        for( int y = 1 ; y<=x ; y++){
            if( x == y){
                printf("%d=",y);
                sum += y;
                printf(" %d\n",sum);

            } else{
                printf("%d+",y);
                sum += y;
            }
        }
    }

}