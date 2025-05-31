#include<stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",n);
    for(i=n;i>=1;i--){
        for(j=0;j<n;j++){
            printf(" * ");
        
        }
        printf("\n");
    }
}