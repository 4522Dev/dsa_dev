#include<stdio.h>
void merge(int a[],int l,int m,int h){
    int n1=m-l+1,n2=h-m;
    int array1[n1],array2[n2];
    for (int i = 0; i < n1; i++)
    {
        array1[i]=a[i+l];
    }
    for (int i = 0; i < n2; i++)
    {
        array2[i]=a[i+m+1];
    }
    int i=0,j=0,k=l;
    while (i<n1&&j<n2)
    {
        if (array1[i]<array2[j])
        {
            a[k]=array1[i];
            k++;
            i++;
        }
        else
        {
            a[k]=array2[j];
            k++;
            j++;
        }
    }
    while (i<n1)
    {
        a[k]=array1[i];
        k++;
        i++;
    }
    while (i<n2)
    {
        a[k]=array2[j];
        k++;
        j++;
    }
}
void mergeSort(int a[],int l,int h){
    if (l<h)
    {
        int mid=l+(h-l)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        merge(a,l,mid,h);
    }   
}
int main(){
    int a[]={10,5,30,15,7,130};
    int l=0,h=5;
    mergeSort(a,l,h);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}