#include<stdio.h>
#include<math.h>
int calculate_digit(int number){
//    886 - 3
//    8878786 - 7



    int count = 0;
    int current_number;
    while (number>=1){
        int current_number = number%10;
        printf("\ncurrent number is = %d \n",current_number);

        number = number/10;

        count++;
    }

    return count,current_number;


}
int ekke_number_sabbo_bar(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    int digit = calculate_digit(number);
    printf("num %d ", digit);

    digit = current_number;

    return 0;
}
