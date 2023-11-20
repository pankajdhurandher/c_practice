#include<stdio.h>
int  ekke_number_sabbo_bar(){
    int Matrix_A[3][3][3],Matrix_B[3][3][3],i,j,k;
    printf("\tSubtraction os two 3x3 Matrix \n");
    printf("\tEnter the value of elements of Matrix A \n");
    for(i=0;i<1;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                printf("Matrix of [%d][%d][%d] is : ",i,j,k);
                scanf("%d",&Matrix_A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\t     Matrix A \n");
    for(i=0;i<1;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                printf("%d\t",Matrix_A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    printf("\t     Matrix B\n");
    for(i=0;i<1;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                printf("Matrix of [%d][%d][%d] is : ",i,j,k);
                scanf("%d",&Matrix_B[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    for(i=0;i<1;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                printf("%d\t",Matrix_B[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\t     subtraction of a Matrix  \n");
int number;
    printf("for Matrix A - Matrix B \t enter 1 \t\n for Matrix B - Matrix A \tenter 2\n");
    scanf("%d",&number);
    if (number == 1) {
        for (i = 0; i < 1; i++) {
            for (j = 0; j < 3; j++) {
                for (k = 0; k < 3; k++) {
                    printf("%d\t", Matrix_A[i][j][k] - Matrix_B[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    if (number == 2) {
        for (i = 0; i < 1; i++) {
            for (j = 0; j < 3; j++) {
                for (k = 0; k < 3; k++) {
                    printf("%d\t", Matrix_B[i][j][k] - Matrix_A[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
}