#include <stdio.h>

int main(){
    int int_data[1000] = {0};
    int count = 0;
    // fgets(int_data,1000,);
    while(1){     
        int_data[count] = getchar();
        if(int_data[count] == 10){
            count--;
            break;
        }
        count++;
    }
    for(;count >= 0;count--){
        if(int_data[count] == ' ')
            count--;
        printf("%c",int_data[count]);
    }
    return 0;
}
