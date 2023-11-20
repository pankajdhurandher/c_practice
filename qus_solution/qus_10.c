#include<stdio.h>
int array_small_large(){
    int array_large_small[10]={88,64,99,55,84,31,3,79,13,64};
    int largest , sec_largest,smallest;
    largest = array_large_small[0];
    for( int i = 0;i<10;i++){
        if ( largest < array_large_small[i]){
            largest = array_large_small[i];
        }
        }
    sec_largest = array_large_small[0];
    for( int j =0;j<10;j++){
        if(sec_largest > array_large_small[j]){
            array_large_small[j] = sec_largest ;
        }
    }
    smallest = array_large_small[0];
    for(int k=1;k<10;k++){
        if(smallest > array_large_small[k]){
             smallest = array_large_small[k];
        }
    }
    printf("the largest number in array is = %d\n",largest);
    printf("the 2nd largest number in array is = %d\n",sec_largest);
    printf("the smallest number in array is = %d\n",smallest);
}