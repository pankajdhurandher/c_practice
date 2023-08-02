#include<stdio.h>
int ekke_number_sabbo_bar() {

    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k <= (number - i); k++) {
            printf(" * ");
        }
        printf("\n");
    }
    for (int x = 0; x <= number; x++) {
        for (int l = 0; l < (number - x); l++) {
            printf(" ");
        }
        for (int m = 0; m <= x; m++) {
            printf(" * ");
        }
        printf("\n");
    }
}