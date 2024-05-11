#include <stdio.h>

//X_n+1=(X_n+a/X_n)/2     前后两次的绝对值差小于0.00001
int main(){
    int int_data = 0;    //数a
    double out_data[2] = {1.1f,1.1f};    //X_n   X_n+1  初始值不可以为0，其他值都可，初始值越离谱，计算的周期越多
    scanf("%d",&int_data);
    while(1){
        out_data[0] = out_data[1];
        out_data[1] = (out_data[0] + (int_data / out_data[0])) / 2.0f;
        if(out_data[1]-out_data[0] < 0.00001f && out_data[1]-out_data[0] > -0.00001f){
            printf("%0.3f",out_data[1]);
            break;
        }
    }
    
    return 0;
}