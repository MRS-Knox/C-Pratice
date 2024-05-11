#include <stdio.h>
//素数定义：只能被常数1或自己整除，不能被其他整数整除的正整数
int main(){
    int int_data = 0;    
    int out_data = 2;    
    scanf("%d",&int_data);
    for(;out_data <= int_data;out_data++){
        for(int count = 2;count <= out_data;count++){   //不除1 这样可以直接判断中间是否有可以整除的数
            if(out_data%count == 0){
                if(count == out_data)
                    printf("%d\n",out_data);
                else
                    break;
            }
        }
    }
    return 0;
}