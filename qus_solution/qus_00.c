#include <stdio.h>

int add(int x, int y)
{
    return printf("%*c%*c", x, ' ', y, ' ');
}

// Driver code
int ekke_number_sabbo_bar()
{
    printf("Sum = %d", add(100, 10));
    return 0;
}



//int ekke_number_sabbo_bar()
//{
//    int num1, num2, i;
//    printf("please enter first number: ");
//    scanf("%d",&num1);
//    printf("please enter second number: ");
//    scanf("%d",&num2);
//    for(i=1;i<=num1;i++){
//        num2++;
//    }
//    printf("sum = %d", num2);
//
//}