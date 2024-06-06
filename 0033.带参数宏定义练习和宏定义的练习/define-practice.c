#include <stdio.h>

int int_data[2] = {0}; 
int out_data[3] = {0};  
#define EXCHANGE_PARAM(int1,int2)  Exchange_Param(int1,int2);
#define CALCULATE_REMAINDER(int1,int2)  Caculate_Remainder(int1,int2);

void Exchange_Param(int1,int2){
    out_data[0] = int2;
    out_data[1] = int1;
}

void Caculate_Remainder(int1,int2){
    out_data[2] = int1%int2;
}

int main(){  
    scanf("%d %d",int_data,&int_data[1]);
    EXCHANGE_PARAM(int_data[0],int_data[1]);
    CALCULATE_REMAINDER(int_data[0],int_data[1]);
    // printf("%d %d",out_data[0],out_data[1]);
    printf("%d",out_data[2]);
    return 0;
} 
