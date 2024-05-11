#include <stdio.h>

int main(void){
    int int_data = 0;
    int profit_buff[6] = {0,100000,200000,400000,600000,1000000};
    float per_buff[6] = {0.1f,0.075f,0.05f,0.03f,0.015f,0.01f};
    short bit_count = 0;
    int out_data = 0;
    scanf("%d",&int_data);
    for(;bit_count < 6;bit_count++){
        if(int_data <= profit_buff[bit_count])
            break;   
    }

    out_data = (int_data-profit_buff[bit_count-1])*per_buff[bit_count-1]*1000;
    for(;bit_count > 0;bit_count--){
        if(bit_count-2 < 0)
            break;
        out_data += (profit_buff[bit_count-1]-profit_buff[bit_count-2])*per_buff[bit_count-2]*1000;
    }
    printf("%d",out_data/1000);
    return 0;
}