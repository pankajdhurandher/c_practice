#include<stdio.h>
int ekke_number_sabbo_bar(){


        int rows;
    printf("Enter a number : ");
    scanf("%d",&rows);

        // first loop to print all rows
        for (int i = 0; i < rows; i++) {

            // inner loop 1 to print white spaces
            for (int j = 0; j < 2 * (rows - i) - 1; j++) {
                printf(" ");
            }

            // inner loop 2 to print star * character
            for (int k = 0; k < 2 * i + 1; k++) {
                printf("* ");
            }
            printf("\n");
        }
        return 0;
    }