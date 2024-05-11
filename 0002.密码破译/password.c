#include <stdio.h>

int main(void){
    char a[5] = {};
    for(int i = 0;i < 5;i++)
        scanf("%c",&a[i]);
    for(int i = 0;i < 5;i++)
        a[i] += 4;  
    for(int i = 0;i < 5;i++) 
        printf("%c",a[i]);
}