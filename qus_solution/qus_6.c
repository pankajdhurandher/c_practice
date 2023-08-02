#include<stdio.h>
int is_not_D(){
    char f;
    printf("Enter somethings : ");
    scanf("%c",&f);
    if(f>='0' && f<='9'){
        printf("Its a digit");
    }
    else if (f>='A' && f<= 'Z'){
        printf("Its a char...");
        printf("Capital Letter");
    }
    else if(f>='a' && f<='b'){
        printf("Its a char...");
        printf("Small Letter");
    }
    else{
        printf("sp.char...");
    }
    return 0;
}
