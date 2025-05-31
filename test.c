/*
#include<stdio.h>
void reverse(int n){
    int r,rev=0;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d\n",rev);
}
int sum(int n){
    int r,sum=0;
    while(n!=0){
        r=n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
}
void sumEquivalent(int *arr,int n){
    int i;
    int k=*arr,r,s=sum(k);
    reverse(k);
    for(i=1;i<n;i++){
        if(sum(*(arr+i))==s)
           reverse(*(arr+i));

    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr=(int) malloc(n* sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&(*(arr+i)));
    sumEquivalent(arr,n);
    return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>

int digisum(int n)
{
    int r,s=0,t=n;
    
    while(t>0)
    {
        r=t%10;
        s=s+r;
        t=t/10;
    }
    
    return s;
}

int ispalindrome(int n)
{
    int r,s=0,t=n;
    int f=0;
    
    while(t>0)
    {
        r=t%10;
        s=s+r;
        t=t/10;
    }
    
    if(n==s)
    {
        f=0;
    }
    else
    {
        f=1;
    }
    
    return f;
}

int reverse(int n)
{
    int r,s=0,t=n;
    
    while(t>0)
    {
        r=t%10;
        s=s*10+r;
        t=t/10;
    }
    
    return s;
}

int main()
{
    int n,c=0,f=0;
    scanf("%d",&n);
    
    int* ptr;
    int i,rev,sum1,sum2;
    
    ptr=(int*)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("%d \n",ptr[0]);
    
    for(i=1;i<n;i++)
    {
        sum1=digisum(ptr[0]);
        sum2=digisum(ptr[i]);
        
        if(sum1==sum2)
        {
            c=c+1;
            f=ispalindrome(ptr[i]);
            
            if(f==0)
            {
                printf("%d \n",ptr[i]);
            }
            else
            {
                rev=reverse(ptr[i]);
                printf("%d \n",rev);
            }
        }
    }
    
    if(c==0)
    {
        printf("No sum-equivalent");
    }
    
    return 0;
}