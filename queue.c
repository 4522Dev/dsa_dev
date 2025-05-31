#include<stdio.h>
// typedef struct queue
// {
//     int *rear;
//     int *front;
//     int arr[10];
// }q;
// void intailize(q head){
//     head.rear=-1;
//     head.front=-1;
// }
#define MAX 5
int rear=-1;
int front=-1;
int arr[MAX];
void insert(int n){
    if(rear+1==MAX){
        printf("Queue is full/overflow");
    }
    else if(rear==-1&&front==-1){
        rear=0;
        front=0;
    }
    else{
        rear=rear+1;
        arr[rear]=n;
    }
}
void delete(){
    if(front==-1||front>rear){
        printf("Queue is underflow");
    }
    else{
        int item=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=front+1;
        }
    }
}
void dispaly(){
    if(front==-1){
        printf("Queue is underflow");
    }
    else{
        while (rear>=front)
        {
            printf("%d\n",arr[front]);
            front++; 
        }

    }
}
int main(){
    int x,n;
    do
    {
        printf("\n1 for insert\n2 for delete\n3 for dispaly\n4 for exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("Insert\n");
            scanf("%d",&n);
            insert(n);
            break;
        case 2:
            printf("Delelte\n");
            delete();
            break;
        case 3:
            dispaly();
            break;
        }
    } while (x<4);
    return 0;
}