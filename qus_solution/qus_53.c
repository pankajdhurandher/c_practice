#include<stdio.h>
int ekke_number_sabbo_bar(){
                        // if switch or while loop mai condition ki jgh direct print kra skte hai
    if(printf("Hello error\n")){}

    switch (printf("\tHello error\n")) {}

    while (!printf("\t\tHello error\n")){}


}