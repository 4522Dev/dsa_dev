//Polynomial Addition
#include<stdio.h>
#include<stdlib.h>
struct link{
int coeff;
int pow;
struct link *next;
};
void create(struct link *node)
{
char ch;
do{
printf("\n enter coeff:");
scanf("%d",&node->coeff);
printf("\n enter power:");
scanf("%d",&node->pow);
node->next=(struct link*)malloc(sizeof(struct link));
node=node->next;
printf("\n continue(y/n):");
scanf("%s",&ch);
} while(ch=='y' || ch=='Y');
node->next=0;
}
void polyadd(struct link *poly1,struct link *poly2,struct link *poly)
{
while(poly1->next && poly2->next)
{
if(poly1->pow>poly2->pow)
{
poly->pow=poly1->pow;
poly->coeff=poly1->coeff;
poly1=poly1->next;
}
else if(poly1->pow<poly2->pow)
{
poly->pow=poly2->pow;
poly->coeff=poly2->coeff;
poly2=poly2->next;
}
else
{
poly->pow=poly1->pow;
poly->coeff=poly1->coeff+poly2->coeff;
poly1=poly1->next;
poly2=poly2->next;
}
poly->next=(struct link *)malloc(sizeof(struct link));
poly=poly->next;
poly->next=0;
}
while(poly1->next || poly2->next)
{
if(poly1->next)
{
poly->pow=poly1->pow;
poly->coeff=poly1->coeff;
poly1=poly1->next;
}
if(poly2->next)
{
poly->pow=poly2->pow;
poly->coeff=poly2->coeff;
poly2=poly2->next;
}
poly->next=(struct link *)malloc(sizeof(struct link));
poly=poly->next;
poly->next=0;
}
}
// void display(struct link *p){

// }
int main()
{
    int x;
    struct link *p1;
    struct link *p2;struct link *p;
    do
    {
        printf("Choose From Following : \n1 for polynomial 1 \n 2 for polynomial 2 \n 3 Add Ploynoomial");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("Creting Polynomial 1 :");
            create(p1);
            break;
        case 2:
            printf("Creting Polynomial 2 :");
            create(p2);
            break;
        case 3:
            printf("Adding Polymial :");
            polyadd(p1,p2,p);
            printf("Final ploynomail : ");
            break;
        }
    } while (x<=3);
    return 0;
}