#include<stdio.h>
int ekke_number_sabbo_bar(){
    int Matrix_sub[2][2],i,j,num,Matrix_subb[2][2];
    printf("\tMatrix A \n");
    for( i = 0 ; i < 2 ; i++){
        for ( j = 0 ; j < 2 ; j++){
            printf("Matrix of [%d][%d] is = ",i,j);
            scanf("%d",&Matrix_sub[i][j]);
        }
        printf("\n");
    }
    printf("\tMatrix A \n");
    for ( i = 0 ; i < 2 ; i++ ){
       for ( j = 0 ; j < 2 ; j++){
        printf("\t%d\t",Matrix_sub[i][j]);
       }
       printf("\n");
    }

    printf("\tMatrix B \n");
    for ( i = 0 ; i < 2 ; i++){
        for ( j = 0 ; j < 2 ; j ++ ){
            printf("Matrix of [%d][%d] is = ",i,j);
            scanf("%d",&Matrix_subb[i][j]);
        }
        printf("\n");
    }
    printf("\tMatrix B \n");
    for ( i = 0 ; i < 2 ; i++){
        for ( j = 0 ; j < 2 ; j++){
            printf("\t%d\t",Matrix_subb[i][j]);
        }
        printf("\n");
    }

    int Matrix_subtraction[2][2];
    printf("For Matrix A - B \t write 1 \t&\n For Matrix B - A \t write 2 \n");
    scanf("%d",&num);
    if ( num == 1 ){
        printf("Matrix A - B\n");
        for ( int z = 0 ; z < 2 ; z++){
            for ( int x = 0 ; x < 2 ; x++){
                printf("\t%d\t",Matrix_sub[i][j] - Matrix_subb[i][j]);
            }
            printf("\n");
        }
    }
    if ( num == 2){
        printf("Matrix B - A \n");
        for ( i = 0 ; i < 2 ; i++){
            for ( j = 0 ; j < 2 ; j++){
                printf("\t%d\t",Matrix_subb[i][j] - Matrix_sub[i][j]);
            }
            printf("\n");
        }
    }
}