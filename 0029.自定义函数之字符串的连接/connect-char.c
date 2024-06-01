#include <stdio.h>
#include <string.h>
//C语言网不支持fgets()函数，所以解题需要用gets()
char int_data[2][1000] = {'0'};
int main(){  
    int count[2] = {0}; //第一行长度  第二行长度
    fgets(&int_data[0][0],1000,stdin);  //stdin:standard input 标准输入，这里代表从键盘输入
    fgets(&int_data[1][0],1000,stdin);  //stdin:standard input 标准输入，这里代表从键盘输入
    count[0] = (int)strlen(&int_data[0][0]);
    count[1] = (int)strlen(&int_data[1][0]);
    int_data[0][count[0]-1] = '\0';  
    int_data[1][count[1]-1] = '\0';

    // gets(int_data[0]);   
    // gets(int_data[1]);

    strcat(int_data[0],int_data[1]);
    puts(int_data[0]);
    return 0;
}
