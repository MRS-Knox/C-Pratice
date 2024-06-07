#include <stdio.h>

int int_data[2] = {0}; 
int out_data[3] = {0};  
#define EXCHANGE_PARAM(a,b,c,d)  c = b; d = a;
#define CALCULATE_REMAINDER(a,b,c)  c = a % b;

int main(){  
    scanf("%d %d",int_data,&int_data[1]);
    EXCHANGE_PARAM(int_data[0],int_data[1],out_data[0],out_data[1]);
    CALCULATE_REMAINDER(int_data[0],int_data[1],out_data[2]);
    // printf("%d %d",out_data[0],out_data[1]);
    printf("%d",out_data[2]);
    return 0;
} 
