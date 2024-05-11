#include <stdio.h>
/*
    n年     1                       2        ...                    5           
    m头   1头大母牛0头小母牛    1头大母牛1头小母牛...2头大母牛(第二生出的小母牛第四年年初)4头小母牛  
*/
int main(void){
    int n[55] = {0};  //输入n年
    int count = 1;
    int m[55] = {0};  //输出m头
    int n_max = 0;
    while(1){
        scanf("%d",&n[count]);
        n[count] = 55 - n[count] > 0 ?  n[count] : 54;
        n_max = n_max - n[count] >= 0 ? n_max : n[count];      
        if(n[count] == 0){
            count--;
            break; 
        } 
        count++;   
    }    
    for(int i = 1;i <= n_max;i++){
            if(i < 5)
                m[i] = i;
            if(i >= 5)
                m[i] = m[i-1] + m[i-3];
    }
    for(int i = 1;i <= count;i++){
        printf("%d\n",m[n[i]]);
    }   
    return 0;     
}


