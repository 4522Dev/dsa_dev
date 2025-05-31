// void linear_search(int *arr,int key){
#include<stdlib.h>
#include<stdio.h>
void linear_search(int *arr,int key){
    int found=0;
    for (int i = 0; i <=sizeof(arr); i++)
    {
        if(key==arr[i]){
            printf("Item found");
            found=1;
            break;
        }
    }
    if (found==0)
    {
        printf("Not Found");
    }
}
void main(){
    int key;
    int size;
    int a[]={1,2,3,4,5};
    printf("Element is searched");
    scanf("%d",&key);
    linear_search(a,key);
}
    // printf("Number of element of array\n");
    // scanf("%d",&size);
    // printf("%d\n",size);
    // int *a=(int*)malloc(size*sizeof(int));
    // printf("Elements of array\n");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d",i);
    //     scanf("%d",a[i]);
    // }