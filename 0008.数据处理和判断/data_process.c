#include <stdio.h>

int main(void){
    int int_data = 0;
    short unit_value[5] = {0};  //个 十 百 千 万
    short out_bit = 5;
    scanf("%d",&int_data);
    unit_value[4] = int_data/10000;
    unit_value[3] = int_data%10000/1000;
    unit_value[2] = int_data%1000/100;
    unit_value[1] = int_data%100/10;
    unit_value[0] = int_data%10;
    for(;out_bit > 0;out_bit--){
        if(unit_value[out_bit-1] != 0 || out_bit == 1)
            break;
    }
    printf("%d\n",out_bit);
    for(short count = out_bit;count > 0;count--){
        if(count == 1)
            printf("%d\n",unit_value[count-1]);
        else
            printf("%d ",unit_value[count-1]);
    }
    for(short count = 0;count < out_bit;count++){
        printf("%d",unit_value[count]);
    }
    return 0;
}