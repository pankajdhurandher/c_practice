#include <stdio.h>
#include <math.h>
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
int isArmstrong(int n) {
    int sum = 0;
    int num = n;
    int digits = countDigits(n);
    while (num > 0) {
        int n_th_number = num % 10;
        sum += pow(n_th_number, digits);
        num /= 10;
    }
    return sum == n;
}
int ekke_number_sabbo_bar(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("Its an Armstrong number.\n");
    } else {
        printf("Its not an Armstrong number.\n");
    }

    return 0;
}
