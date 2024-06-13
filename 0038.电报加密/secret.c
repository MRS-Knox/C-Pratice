#include <stdio.h>
#include <string.h>

int main(){
    char int_data[1000] = {0}; 
    int count = 0;
    fgets(int_data,1000,stdin);
    count = (int)strlen(int_data);
    for(int count1 = 0;count1 < count;count1++){
        if(int_data[count1] >= 'a' && int_data[count1] < 'z')
            printf("%c",int_data[count1]+1);
        else if(int_data[count1] == 'z')
            printf("a");
        else
            printf("%c",int_data[count1]);
    }
    return 0;
} 
