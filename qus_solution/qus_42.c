#include<stdio.h>
int  ekke_number_sabbo_bar() {
    int Dot_pro_A[3][3],Matrix_A[3][3],Matrix_B[3][3],i,j,k;
    printf("\t subtraction of a 3x3 Matrix \n");
    printf("\t Matrix A\n");
    for(int i = 0 ; i < 1 ; i++){
        for(int j = 0 ; j <3 ; j++){
            for(int k = 0 ; k <3 ; k++){
                int mat[3][3];
                printf("Enter the %d%d elements of that array : ",j,k);
                scanf("%d",&Matrix_A[j][k]);
            }
            printf("\n");
        }
    }

    printf("\t Matrix B \n");
    for(int i = 0 ; i < 1 ; i++){
        for(int j = 0 ; j <3 ; j++){
            for(int k = 0 ; k <3 ; k++){
                int mat[3][3];
                printf("Enter the %d%d elements of that array : ",j,k);
                scanf("%d",&Matrix_B[j][k]);
            }
            printf("\n");
        }
    }
    printf("\t      Matrix A\n");
    for(i = 0 ; i < 1 ; i++){
        for( j = 0 ; j < 3 ; j++){
            for(k = 0 ; k < 3 ; k++){
                printf("\t %d",Matrix_A[j][k]);
            }
            printf("\n");
        }
    }

    printf("\n\t      Matrix B\n");
    for(i = 0 ; i < 1 ; i++){
        for( j = 0 ; j < 3 ; j++){
            for(k = 0 ; k < 3 ; k++){
                printf("\t %d",Matrix_B[j][k]);
            }
            printf("\n");
        }
    }
    printf("\n\tDot product of Matrix \n");
    for(i = 0 ; i < 1 ; i++){
        for( j = 0 ; j < 3 ; j++){
            for(k = 0 ; k < 3 ; k++){
                printf("\t %d",Matrix_A[j][k]*Matrix_B[j][k]);
            }
            printf("\n");
        }
    }
}