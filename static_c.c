// #include<stdio.h>
// void test();
// void main()
// {
//     test();
//     test();
//     test();
// }
// void test(){
//     static int a=0;
//     a=a+1;
//     printf("%d\t",a);
// }
#include <stdio.h>
void fun();
void main()
{
    fun();
    fun();
    fun();
}
void fun()
{
    // static int a = 10;
    int a = 10;
    ++a;
    printf("%d \n", a);
}
