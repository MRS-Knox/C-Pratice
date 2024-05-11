#include <stdio.h>
//y = 2(y2+1)
int main(){
    int int_data = 0;    //第N天
    long long int out_data = 1;    //桃子总数    最后一天1颗桃
    scanf("%d",&int_data);
    for(int count = 1;count < int_data;count++){
        out_data = 2 * (out_data + 1);
    }
    printf("%lld",out_data);

    return 0;
}