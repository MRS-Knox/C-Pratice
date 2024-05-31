#include <stdio.h>

int main(){
    long long int int_data = 0;
    scanf("%lld",&int_data);
    for(long long int count = 2;count < int_data;count++){
        if(int_data%count == 0){
            printf("not prime");
            return 0;
        }
    }
    printf("prime");
    return 0;
}
