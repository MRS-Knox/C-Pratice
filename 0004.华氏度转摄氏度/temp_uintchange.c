#include <stdio.h>

int main(void){
    float int_data = 0.0f;
    float out_data = 0.0f;
    scanf("%f",&int_data);
    out_data = (int_data-32)*5/9; 
    printf("c=%.2f",out_data);
    return 0;
}