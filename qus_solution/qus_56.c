#include<stdio.h>
int ekke_number_sabbo_bar() {
    int number,i,j,k;
    printf("Enter the number of triangle height : ");
    scanf("%d",&number);
    for ( i = 0 ; i<number ; i++){
        for (j = 0 ; j <= 2*(number - i)-1 ; j++){
            printf(" ");
        }
        for ( k = 0 ; k<=number ; k++){
            printf(" *");

        }
        printf("\n");
    }
}