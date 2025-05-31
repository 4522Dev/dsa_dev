#include<stdio.h>

int main(){
    register int a=10;
    printf("%d",a);
    printf("%0x",&a);
    printf("%u",&a);
    return 0;
}