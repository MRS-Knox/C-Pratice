#include <stdio.h>
#include <string.h>

void Cal_Char_Number(char* pint_buff,int* pout_buff,int length){
    for(int count = 0;count < length;count++){
        if((pint_buff[count] >= 'a' && pint_buff[count] <= 'z') || (pint_buff[count] >= 'A' && pint_buff[count] <= 'Z'))
            pout_buff[0]++;
        else if(pint_buff[count] >= '0' && pint_buff[count] <= '9')
            pout_buff[1]++;
        else if(pint_buff[count] == ' ')
            pout_buff[2]++;
        else if(pint_buff[count] >= 0 && pint_buff[count] <= 127)
            pout_buff[3]++;
    }
}

int main(){  
    char int_data[1000] = {0};
    int out_data[4] = {0,0,0,0};  //字母 数字 空格 其他字符
    // gets(int_data);
    fgets(int_data,1000,stdin);
    int length = (int)strlen(int_data);
    length--;   //去掉最后一位的'\n' ，用gets时需要把这个去掉
    Cal_Char_Number(int_data,out_data,length);
    printf("%d %d %d %d",out_data[0],out_data[1],out_data[2],out_data[3]);
    return 0;  
}
