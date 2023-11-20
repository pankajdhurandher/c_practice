#include<stdio.h>
int ekke_number_sabbo_bar(){
    printf("for 2x2 Matrix\n");
    int MatxA[2][2];
    int i,j;
    for(  i = 0 ; i < 2 ; i++){
        for( j = 0 ; j < 2 ; j++){
            printf("matrix  [%d][%d] : ",i,j);
            scanf("%d",&MatxA[i][j]);
        }
    }
    printf("Elements in 2x2 Matrix");
    for ( i = 0 ; i < 2 ; i++){
        printf("\n");

        for ( j = 0 ; j < 2 ; j++){
            printf("%d\t",MatxA[i][j]);
        }

    }

    int matxB[2][2];
    for( i = 0 ; i < 2 ; i++){
        printf("\n");
        for ( j = 0 ; j < 2 ; j++){
            printf("Matrix [%d][%d] is :  ",i,j);
            scanf("%d",&matxB[i][j]);
        }
    }

    printf("\nElements in Matrix B \n");
    for ( int i = 0 ; i < 2 ; i++){
        printf("\n");
        for ( j = 0 ; j < 2 ; j++){
            printf("%d\t",matxB[i][j]);
        }
        printf("\n");
    }


    printf("\n\tSum of Matrix A and Matrix B\n");
    for ( i = 0 ; i < 2 ; i++){
        printf("\n");
        for ( j = 0 ; j < 2 ; j++){
            printf("%d\t",MatxA[i][j] + matxB[i][j]);
        }
        printf("\n");
    }

}