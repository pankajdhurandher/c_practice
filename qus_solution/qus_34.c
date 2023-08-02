#include<stdio.h>
int fibo(int n);
int ekke_number_sabbo_bar(){

    int number;
    printf("Enter a number that is equal to length of fibonacci sequence : ");
    scanf("%d",&number);
    printf("fibonacci of %d th term is : %d\n",number, fibo(number));


}
int fibo(int n){

    if(n == 0){
        return 0;
    }
    if(n == 1 ){
        return 1;
    }

    int fibo_Nm1 = fibo(n-1);
    int fibo_Nm2 = fibo(n-2);
    int fiboN = fibo_Nm1 + fibo_Nm2;
    // printf("fibonancci of %d th term is : %d\n",n,fiboN);
    return fiboN;

}