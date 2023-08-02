#include<stdio.h>
int  ekke_number_sabbo_bar(){
    printf("\tSum of 3x3 Matrix\n");
    printf("\n\tEnter the value of elements in Matrix A\n");
    int Matrix_A[3][3][3],Matrix_B[3][3][3],i,j,k;
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
    printf("\t     Matrix A\n");
    for(i=0;i<1;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                printf("%d  ",Matrix_A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\n\tEnter the value of elements in Matrix B\n");
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
    printf("\t     Matrix B\n");
    for(i=0;i<1;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                printf("%d \t",Matrix_B[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\t     Sum of Matrix A and Matrix B\n");
    for(i=0;i<1;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                printf("%d \t",Matrix_A[i][j][k]+Matrix_B[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}