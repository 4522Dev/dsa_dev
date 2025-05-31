#include<stdio.h> 
#include<stdlib.h> 
// void create(); 
// void display(); 
struct node { 
    int data; 
    struct node*next; 
}; 
struct node *head; 
void create() { 
    struct node *newnode; 
    struct node *temp; 
    int n=1; 
    head=0; 
    while(n==1) { newnode=(struct node*)malloc(sizeof(struct node)); 
    printf("enter a number "); 
    scanf("%d",&newnode->data);
    //newnode->next = 0; 
    if(head==0) { 
        head=temp=newnode; 
    } 
    else { 
        temp->next =newnode; 
        temp = newnode; 
        newnode->next = 0;
        } 
    n=0; 
    printf("Enter choice: \n1 to continue\n0 to exit"); 
    scanf("%d",&n); 
    if(n==0) break; 
    } 
} 
void display() { //to print data 
int count=0; 
struct node *temp; 
temp=head; 
//while(temp->next!=0) { 
while(temp!=0){    
    printf("%d ",temp->data); 
    temp=temp->next; 
    count++; 
} 
//if(temp->next==0){ 
    // printf("%d",temp->data); 
    // } 
    printf("\nCount: %d \n",count);
} 
void insert_beg() { 
    struct node *newnode; 
    newnode=(struct node*)malloc(sizeof(struct node)); 
    printf("\nEnter the value to be entered: "); 
    scanf("%d",&newnode->data); 
    newnode->next =head; 
    head=newnode; 
    } 
void insert_end() 
{ 
    struct node *newnode, *temp; 
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value to be entered at the end: "); 
    scanf("%d",&newnode->data); 
    temp = head; 
    while(temp->next !=0) { 
        temp=temp->next; 
    } 
    temp->next=newnode; 
    newnode->next = 0;
}
void insert_any() { 
    int pos, i=1,count; 
    struct node*newnode, *temp; 
    newnode = (struct node*) malloc(sizeof(struct node)); 
    temp=head;
        while(temp!=0){ 
        temp=temp->next; 
        count++;
        } //Get the position from user – pos 
        printf("\nEnter the position where the data is to be entered: "); 
        scanf("%d",&pos); 
        if (pos>count) {printf("invalid postion");} 
        else{ 
            temp =head; 
            while ( i< pos-1){ 
                temp = temp->next; 
                i++; 
            } 
            printf("\nEnter the data: "); 
            scanf("%d",&newnode->data); 
            newnode->next = temp->next; 
            temp->next = newnode; 
        } 
    } 
    void del_beg() { 
        struct node *temp; 
        if (head == 0) printf("list empty"); 
        else{ 
            temp =head; 
            head = head->next; 
            free(temp); 
        }
    } 
void del_end() { 
    struct node*temp;
    struct node*prevnode; 
    temp=head; 
    while(temp->next !=0){ 
        prevnode = temp; 
        temp=temp->next; 
    } 
    if(temp==head){ 
    head = 0; }
    else {prevnode->next=0; }
    free(temp); 
} 
void del_any() { 
    struct node*temp; 
    struct node*nextnode; 
    int i=1, pos; 
    printf("Enter the position from which the node is to be deleted: "); 
    scanf("%d",&pos); 
    temp=head; 
    while(i < pos-1){ 
        temp = temp->next; 
        i++; 
    } 
    nextnode = temp->next; 
    temp->next = nextnode->next; 
    free(nextnode); 
    }
int main() { 
    create(); 
    display(); 
    printf("Inserting an element at the beggining: \n"); 
    insert_beg(); 
    display(); 
    printf("Inserting an element at the end: \n"); 
    insert_end(); 
    display(); 
    printf("Inserting an element at the 2nd position: \n");
    insert_any(); 
    display(); 
    printf("The list after deletig the first element: \n"); 
    del_beg(); 
    display(); 
    printf("The list after deleting the last element: \n" ); 
    del_end(); 
    display(); 
    printf("The list after deleting the 3rd element: \n"); 
    del_any(); 
    display(); 
    return 0; 
} 