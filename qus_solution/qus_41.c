#include<stdio.h>
int  ekke_number_sabbo_bar() {
    printf("\t Transpose of 3x3 Matrix\n");
    printf("\n\tEnter the value of elements in Matrix A\n");
    int Matrix_A[3][3], i, j, k;
    for (i = 0; i < 1; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
            printf("Matrix of [%d][%d] is : ", j, k);

                scanf("%d", &Matrix_A[j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    printf("\t    Transpose of Matrix A\n");
    for (i = 0; i < 1; i++) {
        for (j = 0; j < 3; j++) {

            for (k = 0; k < 3; k++) {
                printf("%d  ", Matrix_A[k][j]);

            }
            printf("\n");
        }
        printf("\n");
    }
}