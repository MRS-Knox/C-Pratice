#include <stdio.h>

int main(){
    int int_data = 0;
    float out_data = 0.0f;
    int mid_num = 0;
    int mol[2] = {2,3};     //分子数列   上上一个与上一个
    scanf("%d",&int_data);
    for(int count = 0;count < int_data;count++){
        if(count < 2){
            out_data += (float)mol[count]/(count+1);
        }
        else{
            out_data += (float)(mol[0] + mol[1]) / mol[1];
            mid_num = mol[0];
            mol[0] = mol[1];
            mol[1] += mid_num;
        }
    }
    printf("%0.2f",out_data);
    return 0;
}