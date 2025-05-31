#include<stdio.h>
int size=5;
int stack[5];
int t=-1;
int isempty(){
    if(t!=-1){
        return 0;
    }
    else{
    return 1;                                                                                                                                                                                                                                                                                                                                             
    }
}
int isfull(){
    if(t==4){//try with 10 also
        return 1; 
    }
    else{
        return 0;
    }
}
int peak(){
    return stack[t];
}
int pop(){
    int data;
    if(isempty()){
        return 0;
    }
    else{
        data=stack[t];
        t--;
        return data;
    }
}
int push(int x){
    if(isfull()){
      return 0;  
    }
    else{
        t++;
        stack[t]=x;
    }
    printf("%d",t);
}
int main(){
    int x,y;
    do
    {
        printf("You can do the following : \nEnter appropriate number \n");
        printf("\n1. push()");
        printf("\n2. pop()");
        printf("\n3. peak()");
        printf("\n4. exit");
        printf("\nWhat is your option??");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            scanf("%d",&y);
            push(y);
            break;
        case 2:
            printf("%d",pop());
            break;
        case 3:
            printf("%d",peak());
            break;
        case 4:
            break;
        default:
            printf("error");
            break;
        }

    } while (x!=4);
    // while(!isempty()){
    //     int data=pop();
    //     printf("%d\n",data);
    // }
    return 0;
}
// int main(){
//     push(89);
//     push(88);
//     push(87);
//     push(86);
//     push(85);
//     push(84);
//     push(83);
//     push(82);
//     push(81);
//     printf("Element at the top is %d:",peak());
//     printf("Elements: \n");
//     while(!isempty()){
//         int data=pop();
//         printf("%d\n",data);
//     }
//     printf("Stack full : %s\n",isfull()?"true":"false");
//     printf("Stack empty : %s\n",isempty()?"true":"false");
//     return 0;
// }