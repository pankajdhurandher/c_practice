#include<stdio.h>
int ekke_number_sabbo_bar() {
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    for( int i = 0 ;i< number ; i++){
        for( int j = 0 ; j <= 2*i ; j++){
            printf(" ");
        }
        int x;
        x = ( 1 + (number - 1)*2);
        for( int k = 0 ; k < ( x - 2*i); k++){
            printf("%d ", 1+k);
        }
        printf("\n");
    }


    for (int i = 1 ; i < (number); i++) {

        for (int j = 0; j < 2 * (number - i) - 1; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%d ",k + 1);
        }
        printf("\n");
    }


}
