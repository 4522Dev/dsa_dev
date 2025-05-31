#include<stdlib.h>
#include<stdio.h>
typedef struct linkedlist_1
{
    int data;
    l *next;
}l;
void createsll(int choice){
    l *head,*newnode,temp;
    head=0;
    while (choice)
    {
        newnode=(struct linkedlist_1*)malloc(sizeof(struct linkedlist_1)*1);
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (head==0)
        {
            
        }
        
    }
    
}