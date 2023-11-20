#include<stdio.h>
#include<string.h>

 struct student {
    char name[100];
    int roll_number;
    int age;
    float percentage;
};
void print_details(struct student s){
    printf("\nstudent 1 details \n Name = %s \n Roll Number = %d \n Age = %d \n percentage = %f\n",s.name,s.roll_number,s.age,s.percentage);
}
 int ekke_number_sabbo_bar(){
     struct student s[3];
     printf("Enter the further details in that order :\nNamr\nRoll Number\nAge\nPercentage\n");
     // input
     printf("\nEnter Student 1 details ");
     scanf("%s",s[0].name);
     scanf("%d",&s[0].roll_number);
     scanf("%d",&s[0].age);
     scanf("%f",&s[0].percentage);

     printf("\nEnter Student 2 details ");
     scanf("%s",s[1].name);
     scanf("%d",&s[1].roll_number);
     scanf("%d",&s[1].age);
     scanf("%f",&s[1].percentage);

     printf("\nEnter Student 3 details ");
     scanf("%s",s[2].name);
     scanf("%d",&s[2].roll_number);
     scanf("%d",&s[2].age);
     scanf("%f",&s[2].percentage);



     //output
     print_details(s[0]);
     print_details(s[1]);
     print_details(s[2]);

}