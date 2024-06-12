#include <stdio.h>

int main(){
    float int_data = 0.0f;  
    scanf("%f",&int_data);
    printf("%6.2f",int_data);
    printf("\n%6.2f %6.2f",int_data,int_data);
    printf("\n%6.2f %6.2f %6.2f",int_data,int_data,int_data);
    return 0;
} 
