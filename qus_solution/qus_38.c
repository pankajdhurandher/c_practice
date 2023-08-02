#include<stdio.h>
int  ekke_number_sabbo_bar(){
    printf("\tDot product of a Matrix\n");
    int Matrix_A[2][2],Matrix_B[2][2],i,j;
    printf("\tEnter the values of elements ofMatrix A\n");
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("Matrix of [%d][%d] is : ",i,j);
            scanf("%d",&Matrix_A[i][j]);
        }
        printf("\n");
    }
    printf("\t     Matrix A\n");
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("\t%d\t",Matrix_A[i][j]);
        }
        printf("\n");
    }

    printf("\tEnter the value of elements in Matrix B\n");
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("Matrix of [%d][%d] is : ",i,j);
            scanf("%d",&Matrix_B[i][j]);
        }
        printf("\n");
    }
    printf("\t     Matrix B\n");
    for ( i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("\t%d\t",Matrix_B[i][j]);
        }
        printf("\n");
    }

    printf("\tDot product of Matrix A and Matrix B\n");
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\t%d\t",Matrix_A[i][j]*Matrix_B[i][j]);
        }
        printf("\n");
    }




}