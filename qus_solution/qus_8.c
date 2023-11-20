#include<stdio.h>
int array_first() {
    int p;
    printf("array ke aregument ka value kb tk pana chahte hai (___<=9) : ");
    scanf("%d",&p);
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int i = 0; i <= p; i++) {
        printf("the argument %d value of an array is = %d\n", i, array[i]);
    }

}