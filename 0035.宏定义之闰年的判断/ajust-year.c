#include <stdio.h>
//闰年的判断条件：1.普通年份能被4整除而不能被100整除    2.世纪年份能被400整除

#define LEAP_YEAR(a,b)    b = Ajust_LeapYear(a)

int Ajust_LeapYear(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){    //判断是否为世纪年份
            if(year % 400 == 0)
                return 0;
            else
                return 1;
        }
        else
            return 0;
    }
    else
        return 1;
}

int main(){
    int int_data = 0;  
    char out_data[2] = {'L','N'};
    int out_count = 0;
    scanf("%d",&int_data);
    LEAP_YEAR(int_data,out_count);
    printf("%c",out_data[out_count]);
    return 0;
} 
