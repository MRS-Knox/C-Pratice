#include <stdio.h>

int main(void){
    int int_data1=0,int_data2=0,int_data3=0;
    int out_data = 0;
    scanf("%d %d %d",&int_data1,&int_data2,&int_data3);
    out_data = int_data1 > int_data2 ? int_data1 : int_data2; 
    out_data = out_data > int_data3 ? out_data : int_data3; 
    printf("%d",out_data);
    return 0;
}