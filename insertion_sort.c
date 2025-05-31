#include<stdio.h>
#define max 6
void insertion_sort(int arr[max]){
    int temp;
    for(int i=1;i<6;i++){
        temp=arr[i];
        int j=i-1;
        while (j>=0&&temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[max]={5,1,10,1,6,2};
    insertion_sort(arr);
    for (int i = 0; i < max; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}