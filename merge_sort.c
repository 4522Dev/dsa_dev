#include<stdio.h>
#include<stdlib.h>
// #define max 5
// void merge_sort(int a[max],int low,int mid,int high){
//     low=0;
//     high=max-1;
// }
// void merge(int a[],int low,int mid,int high){
//     int *array1=(int *)malloc((mid-low+1)*sizeof(int)); 
//     int *array2=(int *)malloc((high-mid)*sizeof(int));
//     printf("%d Dev",sizeof(array1)/sizeof(array1[0]));
//     // int *finalArray=(int *)malloc((sizeof(array1)+sizeof(array2))*sizeof(int));
//     int i=0,j=0,k=0;
//     for (int it = low; it < mid; it++)
//     {
//         array1[it]=a[it];
//     }
//     for (int i=high; i>mid; i--)
//     {
//         array2[i]=a[i];
//     }
//     while (i<sizeof(array1)&&j<sizeof(array2))
//     {
//         if(array1[i]<array2[j]){
//             // printf("Dev2");
//             a[k]=array1[i];
//             // finalArray[k]=array1[i];
//             i++;
//             k++;
//         }
//         else{
//             // printf("Dev2");
//             a[k]=array2[j];
//             // finalArray[k]=array2[j];
//             j++;
//             k++;
//         }
//     }
//     while (i<sizeof(array1))
//     {
//     // printf("Dev2");
//         // finalArray[k]=array1[i];
//         a[k]=array1[i];
//         i++;
//         k++;
//     }
//     while (j<sizeof(array2))
//     {
//     // printf("Dev2");
//         // finalArray[k]=array2[j];
//         a[k]=array2[j];
//         j++;                                                                                                                                                      
//         k++;
//     }
// }
void merge(int a[5],int low,int mid,int high){
    int n1=mid-low+1;
    int n2= high-mid;
    int left[n1],right[n2];
    // int *finalArray=(int *)malloc((sizeof(array1)+sizeof(array2))*sizeof(int));
    int i=0,j=0,k=0;
    for (i = 0; i < n1; i++)
    {
        left[i]=a[i];
    }
    for (j=high; j>0; j--)
    {
        right[j]=a[j];
    }
    while (i<sizeof(left)&&j<sizeof(right))
    {
        if(left[i]<right[j]){
            // printf("Dev2");
            a[k]=left[i];
            // finalArray[k]=array1[i];
            i++;
            k++;
        }
        else{
            // printf("Dev2");
            a[k]=right[j];
            // finalArray[k]=array2[j];
            j++;
            k++;
        }
    }
    while (i<sizeof(left))
    {
    // printf("Dev2");
        // finalArray[k]=array1[i];
        a[k]=left[i];
        i++;
        k++;
    }
    while (j<sizeof(right))
    {
    // printf("Dev2");
        // finalArray[k]=array2[j];
        a[k]=right[j];
        j++;                                                                                                                                                      
        k++;
    }
}
void Merge_Sort(int a[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        Merge_Sort(a,low,mid);
        Merge_Sort(a,mid+1,high);
        merge(a,low,mid,high);
        // printf("Dev1");
}
}
int main(){
    int arr[]={9,4,8,2,130};
    int low=0,high=sizeof(arr)/sizeof(arr[0]);
    Merge_Sort(arr,low,high);
    for (int count = 0; count < 5; count++)
    {
        // printf("%d\n",count);
        printf("%d  ",arr[count]);
    }
    return 0;
}