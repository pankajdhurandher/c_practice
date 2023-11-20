#include<stdio.h>
int nat_num_or_not(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number >= 1) {
        printf(" Naturl number \n");
        if(number % 2 == 0){
            printf("even number ");
        } else{
            printf("odd number ");
        }
    } else{
        printf(" nhi hai ye natural number ");
    }

}