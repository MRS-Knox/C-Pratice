#include <stdio.h>

int main(void){
    int int_data = 0;
    long long int data = 1;
    long long int out_data = 0;
    scanf("%d",&int_data);
    int_data = int_data > 20 ? 20 : int_data;
    if(int_data == 0)
        out_data = 0;
    else{
        for(int count = 1;count <= int_data;count++){          
            for(int count1 = 1;count1 <= count;count1++)
                data *= count1;
            out_data += data;
            data = 1;
        }
    }
    printf("%lld",out_data);

    return 0;
}
