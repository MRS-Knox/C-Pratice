#include <stdio.h>

int main(void){
    int data[10] = {0};
    int mid_num = 0;
    int mid_count = 0;
    for(int count = 0;count < 9;count++)
        scanf("%d",&data[count]);
    scanf("%d",&mid_num);
    for(;mid_count < 9;mid_count++){
        if(mid_num <= data[mid_count])
            break;           
    }
    for(int count = 0;count < 9;count++){
        if(count == mid_count)
            printf("%d\n",mid_num);
        printf("%d\n",data[count]);
    }

    return 0;
}

