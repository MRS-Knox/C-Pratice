#include <stdio.h>
/*
*   选择排序是一种简单直观的排序算法。它的工作原理是每一趟从待排序的数据元素中选出最小（或最大）的一个元素，顺序放在已排好序的数列的最后，
*   直到全部待排序的数据元素排完。 
*/
int main(){
    int int_data[10] = {0};  
    int mid_num = 0;
    int mid_count = 0;   
//    int out_data[10] = {0};
    for(int count = 0;count < 10;count++)
        scanf("%d",&int_data[count]);  

    for(int out_count = 0;out_count < 10;out_count++){
        mid_num = int_data[out_count];
        for(int count = out_count;count < 10;count++){  //找出待排序的最小值
            if(mid_num >= int_data[count]){
                mid_num = int_data[count];
                mid_count = count;
            }
        }
        int_data[mid_count] = int_data[out_count];
        int_data[out_count] = mid_num;       
    }

    for(int count = 0;count < 10;count++)
        printf("%d\n",int_data[count]);     
    return 0;
}

//题目：三个数字的排序
// #include <stdio.h>
// 
// int main(){
//     int int_data[3] = {0}; 
//     int out_data[3] = {0};
//     int mid_num = 0;
//     int mid_count = 0;   
//     scanf("%d %d %d",&int_data[0],&int_data[1],&int_data[2]);
//     for(int out_count = 0;out_count < 3;out_count++){
//         mid_num = int_data[out_count];
//         for(int count = out_count;count < 3;count++){  //找出待排序的最小值
//             if(mid_num >= int_data[count]){
//                 mid_num = int_data[count];
//                 mid_count = count;
//             }
//         }
//         int_data[mid_count] = int_data[out_count];
//         int_data[out_count] = mid_num;       
//     }
//     printf("%d %d %d",int_data[0],int_data[1],int_data[2]);
//     return 0;
// } 