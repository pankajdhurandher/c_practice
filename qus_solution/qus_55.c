#include<stdio.h>
int ekke_number_sabbo_bar() {
    int number,r,sum = 0;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("\nEntered number in character : \n");
    while(number>0){
        r = number%10;
        sum = sum*10 + r;
        number/=10;
    }
   number = sum;
    while(number>0){
        r = number%10;
        switch (r) {
            case 0:
                printf("\nZero");
                break;
            case 1:
                printf("\nOne");
                break;
            case 2:
                printf("\nTwo");
                break;
            case 3:
                printf("\nThree");
                break;
            case 4:
                printf("\nFore");
                break;
            case 5 :
                printf("\nFive");
                break;
            case 6:
                printf("\nSix");
                break;
            case 7:
                printf("\nSeven");
                break;
            case 8:
                printf("\nEight");
                break;
            case 9:
                printf("\nNine");
                break;
        }
        number = number/10;
    }
}