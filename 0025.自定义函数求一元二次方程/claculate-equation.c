#include <stdio.h>

//迭代法求根函数
double Calculate_Root(int data){   
    double out_data[2] = {1.1f,1.1f};    //X_n   X_n+1  初始值不可以为0，其他值都可，初始值越离谱，计算的周期越多
    while(1){
        out_data[0] = out_data[1];
        out_data[1] = (out_data[0] + (data / out_data[0])) / 2.0f;
        if(out_data[1]-out_data[0] < 0.00001f && out_data[1]-out_data[0] > -0.00001f){
            return out_data[1];
        }
    }
}

int main(void){
    int int_data[3] = {0};  //a,b,c
    float out_data[2] = {0.0f};  //x1,x2
    int mid_num = 0;    
    for(int count = 0;count < 3;count++)
        scanf("%d",&int_data[count]);
    mid_num = int_data[1]*int_data[1]-4*int_data[0]*int_data[2];    //b*b-4*a*c
    if(mid_num > 0){
        out_data[0] = (float)(-int_data[1]+Calculate_Root(mid_num))/(2*int_data[0]*int_data[2]);
        out_data[1] = (float)(-int_data[1]-mid_num)/(2*int_data[0]*int_data[2]);
        printf("x1=%0.3f x2=%0.3f",out_data[0],out_data[1]);
    }
    else if(mid_num == 0){
        out_data[0] = (float)(-int_data[1]+Calculate_Root(mid_num))/(2*int_data[0]*int_data[2]);
        printf("x1=%0.3f x2=%0.3f",out_data[0],out_data[0]);
    }
    else if(mid_num < 0){
        out_data[0] = (float)(0-int_data[1])/(2*int_data[0]); //-b/2a
        out_data[1] = (float)(Calculate_Root(-mid_num)/(2*int_data[0]));  //(b*b-4*a*c)^2/2a
        printf("x1=%0.3f+%0.3fi x2=%0.3f-%0.3fi",out_data[0],out_data[1],out_data[0],out_data[1]);
    }  
    return 0;
}

