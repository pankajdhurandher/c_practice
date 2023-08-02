#include<stdio.h>
int ekke_number_sabbo_bar(){
    int Matrix_trp[2][2],i,j;
    printf("\tTranspose of a Matrix\n");
    for ( i=0;i<2;i++){
        for ( j=0;j<2;j++){
            printf("Matrix of [%d][%d] is = ",i,j);
            scanf("%d",&Matrix_trp[i][j]);
        }
        printf("\n");
    }

    printf("\tMatrix A\n");
    for ( i=0;i<2;i++){
        for ( j=0;j<2;j++){
            printf("\t%d\t",Matrix_trp[i][j]);
        }
        printf("\n");
    }

    printf("Transpose os a Matrix A\n");
    for ( i=0;i<2;i++){
        for ( j=0;j<2;j++){
            printf("\t%d\t",Matrix_trp[j][i]);
        }
        printf("\n");
    }

}