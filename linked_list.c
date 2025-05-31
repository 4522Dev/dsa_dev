#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
    int data;
    struct linked_list *next;
};
struct linked_list *head;
void create_linked_list(){
    int n=1;
    struct linked_list *temp,*newnode;
    do{
    newnode=(struct linked_list*)malloc(sizeof(struct linked_list));
    printf("Enter data :");
    scanf("%d",&newnode->data);
    if (head==0)
    {
        newnode=head=temp;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
        newnode->next=0;
    }
    scanf("%d",&n);
    }while(n==1);
}
void display(){
    struct linked_list *temp;
    temp=head;
    int count=1;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
        count++;
    }
    if (temp->next==0)
    {
        printf("\n%d",temp->data);
    }
    printf("\n%d",count);
}
int main(){
    struct linked_list *l;
    create_linked_list();
    display();
    create_linked_list();
    return 0;
}