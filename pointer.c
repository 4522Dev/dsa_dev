// #include<stdio.h>
// void main()
// {
//     int a[]={1,2,3,4,5,6,7};
//    int *p=&a[3];
//    int *q=&a[5];
//    printf("%d \n", p<=q);
//    printf("%d \n ",p>=q);
//    q=&a[3];
//    printf("%d \n", p==q);
// }
#include<stdio.h>
void main()
{
    int a[]={3,88,23,67,42,34,78,45,89,56,98};
    int *p=&a[1],*q=&a[5];
    printf("%d ", *(p+3));
    printf("%d ",*(q-3));
    printf("%d ",q-p);
    printf("%d ",p<q);
    printf("%d",*p<*q);
}