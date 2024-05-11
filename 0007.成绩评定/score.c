#include <stdio.h>

int main(void){
    int int_data = 0;
    char out_data = 0;
    scanf("%d",&int_data);
    if(int_data < 60)
        out_data = 'E';
    else if(int_data < 70) 
        out_data = 'D';
    else if(int_data < 80) 
        out_data = 'C';
    else if(int_data < 90) 
        out_data = 'B';
    else if(int_data <= 100) 
        out_data = 'A';
    printf("%c",out_data);
    return 0;
}