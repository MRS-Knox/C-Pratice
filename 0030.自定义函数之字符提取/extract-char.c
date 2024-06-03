#include <stdio.h>
#include <string.h>

char int_data[100] = {0};
char out_data[100] = {0};
int main(){  
    int count = 0;
    int out_count = 0;
    fgets(int_data,100,stdin);  //stdin:standard input 标准输入，这里代表从键盘输入
    // gets(int_data);   
    count = (int)strlen(int_data);  //strlen 计算出来得字符串长度的后两位是‘\n\0’
    for(int count1 = 0;count1 < count;count1++){
        if(int_data[count1] == 'a' || int_data[count1] == 'e' || int_data[count1] == 'i' || 
        int_data[count1] == 'o' || int_data[count1] == 'u')
            out_data[out_count++] = int_data[count1];
    }
    puts(out_data);
    return 0;
}
