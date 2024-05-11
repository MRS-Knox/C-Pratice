#include <stdio.h>

int main(void){
    int int_data = 0;
    long data = 2;
    long out_data = 0;
    scanf("%d",&int_data);
    for(int count = 1;count <= int_data;count++){
        out_data += data;
        data = data*10 + 2;
    }
    printf("%ld",out_data);
    return 0;
}

