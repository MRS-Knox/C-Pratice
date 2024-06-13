#include <stdio.h>

#define FIND_MAX(a,b,c)   (a > b ? a : b) > c ? (a > b ? a : b) : c

int main(){
    int int_data[3] = {0}; 
    float out_data = 0.0f; 
    scanf("%d %d %d",int_data,&int_data[1],&int_data[2]);
    out_data = (float)FIND_MAX(int_data[0],int_data[1],int_data[2]);
    printf("%0.3f\n",out_data);
    printf("%0.3f",out_data);
    return 0;
} 
