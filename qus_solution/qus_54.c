#include<stdio.h>
int ekke_number_sabbo_bar(){
    int number,n,r;
    printf("Enter a number : ");
    scanf("%d",&number);

    while(number>0){
        r = number%10;
        n = r;
        number /=10;
        switch (n) {
            case '0 ':
                printf("\nzero");
                break;
            case '1':
        }
    }

}
