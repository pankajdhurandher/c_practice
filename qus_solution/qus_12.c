#include<stdio.h>
int rec_factorial( int n);

int nothing(){
    printf(" sum is = %d", rec_factorial( 7));

    return 0;
}

int rec_factorial( int m){
    if(m==1){
        return 1;
    }
    int sumnm1 = rec_factorial(m-1);
    int sumN = sumnm1 * m;
    return sumN;
}
