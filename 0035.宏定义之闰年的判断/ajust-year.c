#include <stdio.h>
//闰年的判断条件：1.普通年份能被4整除而不能被100整除    2.世纪年份能被400整除

#define LEAP_YEAR(a)    Ajust_LeapYear(a)   //相当于    LEAP_YEAR(a) = Ajust_LeapYear(a)

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
    scanf("%d",&int_data);
    printf("%c",out_data[LEAP_YEAR(int_data)]);
    return 0;
} 
