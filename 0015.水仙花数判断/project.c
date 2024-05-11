#include <stdio.h>
//水仙花数是指一个 3 位数，它的每个数位上的数字的 3次幂之和等于它本身。例如：1^3 + 5^3+ 3^3 = 153
int main(void){
    int data[4] = {0};  //个位 十位 百位 检验数
    int out_data[4] = {0};
    int out_data_count = 0;
    for(int count = 100;count <= 999;count++){
        data[0] = count%10;
        data[1] = count%100/10;
        data[2] = count/100;
        data[3] = data[0]*data[0]*data[0]+data[1]*data[1]*data[1]+data[2]*data[2]*data[2];
        if(count == data[3])
            out_data[out_data_count++] = count;
    }
    for(int count = 0;count < out_data_count;count++)
        printf("%d\n",out_data[count]);
    return 0;
}
