#include <stdio.h>
//辗转相除法
// int main(void){
//     int intput_data[2] = {0};
//     int max = 0,min = 0;
//     int output_data[2] = {0};   //最大公约数和最小公倍数
//     scanf("%d %d",intput_data,&intput_data[1]);
//     max = intput_data[0] >= intput_data[1] ? intput_data[0] : intput_data[1];
//     min = intput_data[0] >= intput_data[1] ? intput_data[1] : intput_data[0];
//     if(max == min)
//         output_data[0] = max;
//     else{
//         while(1){
//             output_data[0] = max % min;
//             if(output_data[0] == 0){
//                 output_data[0] = min;   //计算出最大公约数
//                 break;
//             } 
//             max = min;
//             min = output_data[0];      
//         }
//     }
//     output_data[1] = (intput_data[0] * intput_data[1]) / output_data[0];    //计算出最小公倍数
    
//     if(output_data[0]*output_data[1] ==  intput_data[0] * intput_data[1])   //验证准确性
//         printf("%d %d",output_data[0],output_data[1]);
//     else
//         printf("EEROR");
//     return 0;
// }

/*两个函数的方式求解 
 *辗转相除法求解最大公约数
 *穷举法求解最小公倍数
*/
int Cal_MaxDivisor(int data1,int data2){
    int max = 0,min = 0;
    int max_divisor = 0;
    max = data1 >= data2 ? data1 : data2;
    min = data1 >= data2 ? data2 : data1;
    if(max == min)
        max_divisor = max;
    else{
        while(1){
            max_divisor = max % min;
            if(max_divisor == 0){
                max_divisor = min;   //计算出最大公约数
                break;
            } 
            max = min;
            min = max_divisor;      
        }
    }
    return (max_divisor);
}

int Cal_MinMultiple(int data1,int data2){
    int min_multiple = 0;
    for(min_multiple = data1;min_multiple += data1;)
        if(min_multiple % data2 == 0)   break;
    return (min_multiple);
}

int main(void){
    int intput_data[2] = {0};
    int max = 0,min = 0;
    int output_data[2] = {0};   //最大公约数和最小公倍数
    scanf("%d %d",intput_data,&intput_data[1]);

    output_data[0] = Cal_MaxDivisor(intput_data[0],intput_data[1]);
    output_data[1] = Cal_MinMultiple(intput_data[0],intput_data[1]);    //计算出最小公倍数
    
    if(output_data[0]*output_data[1] ==  intput_data[0] * intput_data[1])   //验证准确性
        printf("%d %d",output_data[0],output_data[1]);
    else
        printf("EEROR");
    return 0;
}