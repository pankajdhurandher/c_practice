#include<stdio.h>
int array_sum(){

    int array[10]={10,20,30,40,50,60,70,80,90,100};
      int sum=0,avg;
      for( int p=9;p>=0;p--){
          sum=sum+array[p];
          avg=sum*0.1;
      }
    printf("Sum of that array is = %d\n\n",sum);
    printf("Avg of that array is = %d\n",avg);
}