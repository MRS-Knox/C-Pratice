#include <stdio.h>

int main(){
    int int_data[3][3] = {0};
    for(int count = 0;count < 3;count++)
        scanf("%d %d %d",&int_data[count][0],&int_data[count][1],&int_data[count][2]);
    for(int count = 0;count < 3;count++){
        for(int count11 = 0;count11 < 3;count11++)
            printf("%d ",int_data[count11][count]);
        printf("\r\n"); //换行符必须\r\n
    }
    return 0;
}
