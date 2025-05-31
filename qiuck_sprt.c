        // do
        // {
        //     st++;
        // }while (a[st]<=pivot);
        // do{
        //     end--;
        // }while (a[end]>pivot);
#include<stdio.h>
int partion(int a[],int size,int lb,int up){
    int pivot=a[lb];
    int st=lb;
    int end=up,temp,temp_1;
    while (st<end)
    {
        while (a[st]<=pivot)
        {
            st++;
        }
        while (a[end]>pivot){
            end--;
        }
        if (st<end)
        {

            temp=a[st];
            a[st]=a[end];
            a[end]=temp;
        }}
        temp_1=a[lb];
        a[lb]=a[end];
        a[end]=temp_1;
        return end;
}
void qiuck_sort(int a[],int size,int lb,int up){
    int loc;
    if(lb<up){
        loc=partion(a,size,lb,up);
        qiuck_sort(a,size,lb,loc-1);
        qiuck_sort(a,size,loc+1,up);
    }
}
int main(){
    int arr[]={7,6,10,9,2,1,15,7,130};
    int size=sizeof(arr)/sizeof(arr[0]);
    int lb=0,up=size;
    qiuck_sort(arr,size,lb,up);
    for (int i = 0; i <=size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}