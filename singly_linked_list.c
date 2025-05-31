#include<stdlib.h>
#include<stdio.h>
typedef struct linkedlist{
    int data;
    struct linkedlist *next;
}l;
l *head;
void createsll(int choice){
    l *newnode;
    l *temp;
    head=0;
    while(choice){
    newnode=(struct linkedlist*)malloc(sizeof(struct linkedlist));
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=newnode=temp;
        // head=temp;
    }
    else{
        temp->next=newnode;
        newnode=temp;
    }
}
}
int count;
void display(l *head){
    count=0;l *temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
        count++;
    }
}
void insertbeg(l *head){
    l *newnode;
    newnode=(struct linkedlist*)malloc(sizeof(struct linkedlist));
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insertend(l *head){
    l *newnode,*temp;
    newnode=(struct linkedlist*)malloc(sizeof(struct linkedlist));
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0){
        temp->next=newnode;
    }
}
void insertatpos(l *head,int pos){
    l *newnode,*temp;int i=0;
    newnode=(struct linkedlist*)malloc(sizeof(struct linkedlist));
    if(i<pos){
        printf("invalid position");
    }
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
    }
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
void deletebeg(l *head){
    l *temp;
    if(head==0){
        printf("list empty");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
}
void deleteend(l *head){
    l *prevnode;
    l *temp=head;
    while(temp->next!=0){
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=0;
    }
    else{
        prevnode->next=0;
    }
    free(temp);
}
void deleteatpos(l *head){
    l *nextnode;
    int i=1,pos;
    l *temp=head;
    while(i<pos-1){
      temp=temp->next;
      i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
int main(){
    l *head;
    int x,ch;
    do{
        scanf("%d ",&x);
        switch(x){
            case 1:
            scanf("%d",&ch);
            createsll(ch);
            // break;
            case 2:
            display(head);
            break;
            case 3:
            insertbeg(head);
            break;
            case 4:
            insertend(head);
            break;
            case 5:
            insertatpos(head,3);
            break;
            case 6:
            deletebeg(head);
            break;
            case 7:
            deleteend(head);
            break;
            case 8:
            deleteatpos(head);
            break;
        }
    }while (x==9);
    
}