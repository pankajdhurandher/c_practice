#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number,r,temp,sum=0;
    printf("\tPalindrome number\n");
    printf("Enter a Palindrome number : ");
    scanf("%d",&number);

    temp = number;
    while (number>0){
        r = number%10;
        sum = (sum*10) + r ;
        number/=10;
    }
    if (temp == sum){
        printf("%d is a Palindrome number . ",temp);
    } else{
        printf("%d is not a Palindrome number . ",temp);
    }

}