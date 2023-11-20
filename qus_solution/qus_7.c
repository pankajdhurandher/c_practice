#include<stdio.h>
int smallest(){
    int a,b;
    printf("Enter a two non equal number : ");
    scanf("%d",&a);
    printf("and : ");
    scanf("%d",&b);
    if(a==b) {
        printf("is this a two non equal numbers !! ask ur .........\n");
    }
       else {
           (a > b) ? printf("%d is a smaller number", b) : printf("%d is a smaller number", a);
         }

}