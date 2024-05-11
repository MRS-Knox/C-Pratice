#include <stdio.h>

int main(){
    int int_data[3][3] = {0};
    int out_data[2] = {0};  //主对角线和、副对角线和
    for(int count = 0;count < 3;count++)
        for(int count1 = 0;count1 < 3;count1++)
            scanf("%d",&int_data[count][count1]);
    out_data[0] = int_data[0][0] + int_data[1][1] + int_data[2][2];
    out_data[1] = int_data[0][2] + int_data[1][1] + int_data[2][0];
 
    printf("%d %d",out_data[0],out_data[1]);     
    return 0;
}