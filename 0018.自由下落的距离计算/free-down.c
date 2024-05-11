#include <stdio.h>

int main(){
    int int_data[2] = {0,0};    //M米  N次反弹
    float out_data[2] = {0.0f,0.0f};    //第N次反弹多高  共经过多少米
    scanf("%d %d",int_data,&int_data[1]);
    out_data[0] = (float)int_data[0]/2;
    out_data[1] += (float)int_data[0];  //第一次落地
    for(int count = 1;count < int_data[1];count++){      
        out_data[1] += out_data[0]*2.0f;
        out_data[0] = out_data[0]/2.0f;
    }
    printf("%0.2f %0.2f",out_data[0],out_data[1]);
    return 0;
}