#include<stdio.h>
int global=100;
void func1()
{

    printf("\nGlobal inside func1 is %d",global);

}

void main()
{
    int local=10;
    printf("\nGlobal variable is %d",global);
    printf("\nLocal variable is %d",local);
    func1();
}
