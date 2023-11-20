#include<stdio.h>
#include<string.h>


int ekke_number_sabbo_bar() {
    struct student {
        char name[100];
        int class;
        int roll_number;
        float cgpa;
    };

    struct student s1;
    strcpy(s1.name,"Pankaj");
    s1.class = 10;
    s1.roll_number = 10121;
    s1.cgpa = 9.20;
    printf("\nstudent 1 details \n");
    printf("Name = %s",s1.name);
    printf("\nClass = %d",s1.class);
    printf("\nRoll Number = %d",s1.roll_number);
    printf("\nCGPA = %.2f\n\n",s1.cgpa);

    for ( int i = 0 ; i<12 ; i++){
        printf("*");
    }

    struct student s2;
    strcpy(s2.name,"Neeraj");
    s2.class = 10;
    s2.roll_number = 10159;
    s2.cgpa = 9.50;
    printf("\n\nStudent 2 details \n");
    printf(" Name = %s",s2.name);
    printf("\nClass = %d",s2.class);
    printf("\nRoll Number = %d",s2.roll_number);
    printf("\nCGPA = %.2f\n\n",s2.cgpa);

    for ( int i = 0 ; i <12 ; i++){
        printf("*");
    }


    struct student s3;
    strcpy(s3.name,"Iqbal");
    s3.class = 10;
    s3.roll_number = 10130;
    s3.cgpa = 9.40;
    printf("\n\nStudent 3 details \n");
    printf("Name = %s",s3.name);
    printf("\nClass = %d",s3.class);
    printf("\nRoll Number = %d",s3.roll_number);
    printf("\nCGPA = %.2f",s3.cgpa);

}