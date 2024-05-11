#include <stdio.h>

int main(void){
    int int_data = 0;
    int out_data = 0;
    scanf("%d",&int_data);
    if(int_data < 1)
        out_data = int_data;
    else if(int_data < 10) 
        out_data = 2*int_data - 1;
    else
        out_data = 3*int_data - 11;
    printf("%d",out_data);
    return 0;
}