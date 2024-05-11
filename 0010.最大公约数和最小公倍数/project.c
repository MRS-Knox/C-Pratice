#include <stdio.h>
//辗转相除法
int main(void){
    int intput_data[2] = {0};
    int max = 0,min = 0;
    int output_data[2] = {0};   //最大公约数和最小公倍数
    scanf("%d %d",intput_data,&intput_data[1]);
    max = intput_data[0] >= intput_data[1] ? intput_data[0] : intput_data[1];
    min = intput_data[0] >= intput_data[1] ? intput_data[1] : intput_data[0];
    if(max == min)
        output_data[0] = max;
    else{
        while(1){
            output_data[0] = max % min;
            if(output_data[0] == 0){
                output_data[0] = min;   //计算出最大公约数
                break;
            } 
            max = min;
            min = output_data[0];      
        }
    }
    output_data[1] = (intput_data[0] * intput_data[1]) / output_data[0];    //计算出最小公倍数
    
    if(output_data[0]*output_data[1] ==  intput_data[0] * intput_data[1])   //验证准确性
        printf("%d %d",output_data[0],output_data[1]);
    else
        printf("EEROR");
    return 0;
}

