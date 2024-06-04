#include <stdio.h>

int main(){  
    int int_data = 0;
    int out_data[4] = {0};  //千 百 十 个
    scanf("%d",&int_data);
    out_data[0] = int_data/1000;
    out_data[1] = int_data%1000/100;
    out_data[2] = int_data%100/10;
    out_data[3] = int_data%10;
    printf("%d %d %d %d",out_data[0],out_data[1],out_data[2],out_data[3]);
    return 0;  
}
