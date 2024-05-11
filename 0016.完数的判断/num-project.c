#include <stdio.h>
//全局变量，数据全都为0
int out_data[50][100] = {
                        {0},    //完数存储
                        {0}     //完数对应的因子
};
int main(){
    int int_data = 0;
    int num_count = 0;
    int factor_count = 1;
    int factor_sum = 0;
    scanf("%d",&int_data);
    for(int count = 1;count <= int_data;count++){
        for(int i = 1;i < count;i++){  //计算因子
           if(count%i == 0){    
               out_data[num_count][factor_count++] = i;
               factor_sum += i;         //计算因子和
           }
        }
        if(factor_sum == count)
           out_data[num_count++][0] = count;    //存储完数
        else
            for(int c = 0;c <= factor_count;c++)
                 out_data[num_count][c] = 0;
        factor_sum = 0;   
        factor_count = 1;  
    }
    for(int i = 0;i < num_count;i++){
        printf("%d its factors are ",out_data[i][0]);   //打印完数
        while(1){
            printf("%d ",out_data[i][factor_count++]);    //打印因子
            if(out_data[i][factor_count] == 0){
                factor_count = 1;
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
