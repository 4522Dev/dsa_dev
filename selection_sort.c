#include<stdio.h>
//#define max 6
void selection_sort(int a[],int n){
    int min,temp;
    for (int i = 0; i <n; i++)
    {
        min=i;
        for (int j = i+1; j <n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i){
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}
int main(){
    int arr[]={5,4,10,1,6,2};
    int n=(sizeof(arr)/sizeof(arr[0]));
    selection_sort(arr,n);
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}