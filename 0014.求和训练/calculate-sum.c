#include <stdio.h>

int main(void){
    int int_data[3] = {0};  //a b c
    float out_data = 0.0f;
    int data1 = 0;
    long data2 = 0;
    float data3 = 0.0f;
    scanf("%d %d %d",int_data,&int_data[1],&int_data[2]);
    for(int count = 1;count <= int_data[0];count++)
        data1 += count;
    for(int count = 1;count <= int_data[1];count++)
        data2 += count*count;
    for(int count = 1;count <= int_data[2];count++)
        data3 += 1.0f/count;
    out_data = data3 + data2 + data1;
    printf("%0.2f",out_data);
    return 0;
}