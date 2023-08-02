#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number,sum = 0,n;
    printf("Enter a number : ");
    scanf("%d",&number);
    while (number > 0 ){
        n = number%10;
        sum = sum + n;
      number = number/10;
    }
    printf("\n sum is = %d",sum);
    return 0;
}