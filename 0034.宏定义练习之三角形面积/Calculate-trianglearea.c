#include <stdio.h>
//三角形面积=SQRT(S*(S-a)*(S-b)*(S-c)) 其中S=(a+b+c)/2

//迭代法求根函数
double Calculate_Root(float data){   
    double out_data[2] = {1.1f,1.1f};    //X_n   X_n+1  初始值不可以为0，其他值都可，初始值越离谱，计算的周期越多
    while(1){
        out_data[0] = out_data[1];
        out_data[1] = (out_data[0] + (data / out_data[0])) / 2.0f;
        if(out_data[1]-out_data[0] < 0.00001f && out_data[1]-out_data[0] > -0.00001f){
            return out_data[1];
        }
    }
}

float int_data[3] = {0.0f,0.0f}; 
float out_data = 0.0f;  
#define Caculate_TRIAREA(a,b,c,d)  d = Caculate_TrigleArea(a,b,c);

float Caculate_TrigleArea(float int1,float int2,float int3){
    float function_out = 0.0f;
    function_out = (int1+int2+int3)/2;
    function_out = function_out*(function_out-int1)*(function_out-int2)*(function_out-int3);
    function_out = (float)Calculate_Root(function_out);
    return function_out;
}

int main(){  
    scanf("%f %f %f",int_data,&int_data[1],&int_data[2]);
    Caculate_TRIAREA(int_data[0],int_data[1],int_data[2],out_data);
    printf("%0.3f",out_data);
    return 0;
} 
