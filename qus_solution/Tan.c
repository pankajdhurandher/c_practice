#include <stdio.h>
#include <math.h>

// A function to count the number of digits in a number
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// A function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int sum = 0;
    int temp = n;
    int digits = countDigits(n);
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return sum == n;
}

int ekke_number_sabbo_bar(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}




//#include<stdio.h>
//
//int calculate_digit(int number){
////    886 - 3
////    8878786 - 7
//    int count = 0;
//    while (number>=1){
//        int current_number = number%10;
//        printf("Current number is %d\n",current_number);
//        number = number/10;
//        for ( int x= 0 ; x<=current_number;x++){
//            printf("*");
//        }
//        count++;
//    }
//
//    return count;
//
//
//}
//int ekke_number_sabbo_bar(){
//    int number;
//    printf("Enter a number : ");
//    scanf("%d",&number);
//    int digit = calculate_digit(number);
//    printf("num %d ", digit);
//    int power = digit;
//    printf("\npower is %d",power);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int calculate_digit(int number){
////    886 - 3
////    8878786 - 7
//    int count = 0;
//    while (number>=1){
//        int current_number = number%10;
//        printf("\ncurrent number is = %d \n",current_number);
//        int sum_of_d;
//        sum_of_d = pow(current_number,digit);
//        int sum = sum + sum_of_d;
//        number = number/10;
//        count++;
//    }
//
//    return count;
//
//
//}
//int ekke_number_sabbo_bar(){
//    int number;
//    printf("Enter a number : ");
//    scanf("%d",&number);
//    int digit = calculate_digit(number);
//    printf("num %d ", digit);
//    int power = digit;
//    printf("\npower is %d",power);
//    return 0;
//}
