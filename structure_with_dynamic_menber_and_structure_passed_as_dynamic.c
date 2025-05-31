#include<stdio.h>
#include<stdlib.h>
/*
typedef struct{
    int i;
    int *ptr;
}Test;
int main(){
    Test *t1=(Test*)malloc(sizeof(Test));
    t1->i=10;
    t1->ptr=(int*)malloc(sizeof(int));
    t1->ptr=20;
    // Test *t1=(Test*)malloc(sizeof(Test[3]));
    // Test *t1=(Test*)malloc(3*sizeof(Test));
    // Test *t1=(Test*)malloc(3,sizeof(Test));
    // t1[0].i=10;t1[1].i=100;t1[2].i=1000;
    // printf("%d\t%d",t1[0].i,t1[1].i,t1[2].i);
    printf("%d\t%d",t1->i,t1->ptr);
    free(t1);
    return 0;
}

typedef struct{
    int i;
    int *ptr;
}Test;
int main(){
    Test *t1=(Test*)malloc(sizeof(Test));
    // t1->i=10;
    t1->ptr=(int*)malloc(sizeof(int));
    // t1->ptr=20;
    scanf("%d",&t1->i);
    scanf("%d",&t1->ptr);
    // Test *t1=(Test*)malloc(sizeof(Test[3]));
    // Test *t1=(Test*)malloc(3*sizeof(Test));
    // Test *t1=(Test*)malloc(3,sizeof(Test));
    // t1[0].i=10;t1[1].i=100;t1[2].i=1000;
    // printf("%d\t%d",t1[0].i,t1[1].i,t1[2].i);
    printf("%d\t%d",t1->i,t1->ptr);
    free(t1);
    return 0;
}*/
typedef struct{
    int i;
    int *ptr;
}Test;
int main(){
   /* Test *t1=(Test*)malloc(sizeof(Test));
    // t1->i=10;
    t1->ptr=(int*)malloc(sizeof(int));
    // t1->ptr=20;
    // scanf("%d",&t1->i);
    // scanf("%d",&t1->ptr); */
    Test *t1=(Test*)malloc(sizeof(Test[3]));
    // Test *t1=(Test*)malloc(3*sizeof(Test)); same result as line 54 and rest reamin same
    // Test *t1=(Test*)malloc(3,sizeof(Test));same result as line 54 and rest reamin same
    t1[0].i=10;t1[1].i=100;t1[2].i=1000;
    printf("%d\t%d\t%d",t1[0].i,t1[1].i,t1[2].i);
    // printf("%d\t%d",t1->i,t1->ptr);
    free(t1);
    return 0;
}