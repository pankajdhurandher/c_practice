                                              //Fibonacci Series

#include<stdio.h>
int ekke_number_sabbo_bar(){
    int n1=0,n2=1,n3,i,number;
    printf("Enter the number of elements:");
    scanf("%d",&number);
    printf("\n%d %d",n1,n2);
    for(i=2;i<number;++i)
    {
        //here a one thing that this code is not valid for number 1 input
        //if we give input 1 then it shows two Fibonacci  sequence

        n3=n1+n2;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}