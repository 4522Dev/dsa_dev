// // // #include<stdio.h>
// // // void main(){
// // //     char a = 273;
// // //     char b = 25;
// // //     int c = a%b;
// // //     printf("%d",c);
// // // }
// // #include <stdio.h>
// // void main()
// // {
// // printf("\n new line escape sequence tutorial");
// // printf("\n first line");
// // printf ("\n Second line \n");
// // printf(" \n 34543 \t 345435 ");
// // printf(" \n watch\b carefully the execution");
// // printf("\n demo code below");
// // printf(" \r remove ");
// // printf("\n done with example");
// // printf(" \n bell sound\a");
// // printf(" \n\"double quotes surrounded text\" ");
// // printf(" \n what is your father name\? ");
// // printf(" \n C:\\test\\test1\\test2");
// // printf(" \n \v vignesh \t krishnakumar ");
// // printf(" \n oculus's \0 reparo ");
// // char* b = "B\124";
// // printf(" \n%s", b);
// // char* s = "B\x5b";
// // printf("\n %s", s);
// // }
// #include<stdio.h>
// void main(){
//     char ch;
//     printf("1. Check Spelling\n");
//     printf("2. Correct Spelling Error\n");
//     printf("3. Display Spelling Error\n");
//     printf("Strike any other key to skip\n");
//     printf("   Enter your choice\n");
//     scanf("%c",&ch);
//     switch (ch)
//     {
//     case '1':
//         printf("Check Spelling");
//         break;
//     case '2':
//         printf("Correct Spelling Error");
//         break;
//     case '3':
//         printf("Display Spelling Error");
//         break;
//     default:
//     printf("No option selected");
//         break;
//     }
// }
// #include<stdio.h>
// void main()
// {
//     int i=0;
//  for(;;)
//  {
// printf("hello");
// i++;
//  }
// }
// # include<stdio.h>
// void main()
// {
//     int i,a[5]={5,6,7};
//     int b[5]={ 1,2,3,4,5};
//     for(i=0;i<5;i++)
//       printf("%d\n",a[i]);
//      for(i=0;i<5;i++)
//       printf("%d\n",b[i]);
// }
// #include <stdio.h>
// int main()
// {
//     int i, j, m, n;
//     printf("Enter the values of m and n:");
//     scanf("%d %d", &m, &n);
//     int a[m][n], rs[m], cs[n];
//     printf("\n Enter the First matrix");
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
        
//     for (i = 0; i < m; i++)
//     {
//         rs[i] = 0;
//         for (j = 0; j < n; j++)
//         {
//             // cs[i] = 0;
//             rs[i] = rs[i] + a[i][j];
//             //cs[j] = cs[j] + a[j][i];
//         }
//     }
//     for (int j = 0; j <n ; j++)
//     {
//         cs[j]=0;
//         for (int i = 0; i < m; i++)
//         {
//             cs[j]=cs[j]+a[i][j];
//         }
//     }

//     for (i = 0; i < m; i++)
//         printf(" the row %d sum is %d : ", i, rs[i]);

//     for (j = 0; j < n; j++)
//         printf(" the column %d sum is %d : ", j, cs[j]);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i, j, m, n;
//     printf("Enter the values of m and n:");
//     scanf("%d %d", &m, &n);
//     int a[m][n], rs[m], cs[n];
//     printf("\n Enter the First matrix");
//     for (i = 0; i < m; i++){
//         for (j = 0; j < n; j++){
//             scanf("%d", &a[i][j]);}}
//    for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
//     for (i = 0; i < m; i++)
//     {
//         rs[i] = 0;
//         for (j = 0; j < n; j++)
//         {
//             rs[i] = rs[i] + a[i][j];
//             cs[j] = cs[j] + a[i][j];
//         }
//     }
//     for (i = 0; i < m; i++)
//         printf( " the row % d sum is % d: ", i, rs[i]);

//     for (j = 0; j < n; j++)
//         printf( " the column % d sum is % d   : ", j, cs[j]);

//     return 0;
// }
// #include <stdio.h>
// void main()
// {
//      char s[5]="hello";
//     char t[5];
//     int i;
//     for(i=0;s[i]!= '\0';i++)
//     {
//         t[i]=s[i];
//     }
//     printf("%s",t);
    
// }
// #include<string.h>
// void main()
// {
//     char s1[10]="hello";
//     char s2[10];
//     printf("%s \n",strcpy(s2,s1));
//     printf("%s", s2);
// }
// #include<string.h>
// void main()
// {
//     char s1[10]="hello";
//     char s2[10];
//     char s3[10];
//     printf("%s \n",strcpy(s3,strcpy(s2,s1)));
//     printf("%s %s",s2,s3);
// }
// #include<string.h>
// void main()
// {
//     char a[]= "GATE2023";
//     char *p= a;
//     printf("%s",a + a[3]-a[1]);
// }
// #include<stdio.h>
// union abc{
// int a;
// char b;
// double c;
// float d;
// };
// int main()
// {
//     union abc b; 
    
// printf("%d", sizeof (b));
// return 0;
// }

// union abc{
// int a;
// // int b;
// char b;
// } var;
// int main()
// {
// var.a=65;
// printf("a=%d\n", var.a);
// printf("b= %c \n",var.b);
// return 0;
// }
// struct store {
// double price;

// union {

// struct {
// char *title;
// char *author;
// int num_pages;
// }book;

// struct {
// int color;
// int size;
// char * design;
// }shirt;

// }item;
// };

// int main()
// {
// struct store s;
// s.item.book.title="networks";
// s.item.book.author="william stallings";
// s.item.book.num_pages=290;
// printf("%s\n", s.item.book.title);
// printf("%d", sizeof(s));
// return 0;
// }
// #include <stdio.h>
// union unionJob
// {
//    //defining a union
//    char name[32];
//    float salary;
//    int workerNo;
// } uJob;
// struct structJob
// {
//    char name[32];
//    float salary;
//    int workerNo;
// } sJob;
// int main()
// {
//    printf("size of union = %d bytes", sizeof(uJob));
//    printf("\nsize of structure = %d bytes", sizeof(sJob));
//    return 0;
// }
// #include<stdio.h>
// void main()
// {
// int a=10;
// int *p,*q;
// p=&a;
// q=&a;
// printf("%0x %d", &p,*q);
// }
// #include<stdio.h>
// void main()
// {
// int i=10,j=20;
// int *p,*q;
// p=&i;
// q=&j;
// *p=*q;
// printf("%d %d",*p,*q);
// }
// #include<stdio.h> 
// int main() 
// { 
//     // Pointer to an integer 
//     int *p;  //pointer
//     	// Pointer to an array of 5 integers 
// //pointer to an array 
//     int arr[5]; 
//    int (*ptr)[5]; 
// // Points to 0th element of the arr. 
//     p = arr; //base address 
// // Points to the whole array arr. 
//     ptr = arr;      
//     printf("p = %x, ptr = %x\n", p, ptr); 
//     ++p;  
//     ++ptr; 
//     printf("p = %x, ptr = %x\n", p, ptr); 
//    return 0; 
// }
// #include<stdio.h>
// void main()
// {
//     int a[]={1,2,3,4,5,6,7};
//    int *p=&a[3];
//    int *q=&a[5];
//    printf("%d \n", p<=q);
//    printf("%d \n ",p>=q);
//    q=&a[3];
//    printf("%d \n", p==q);
// }
#include<stdio.h>
void main()
{
    int a[]={3,88,23,67,42,34,78,45,89,56,98};
    int *p=&a[1],*q=&a[5];
    printf("%d ", *(p+3));
    printf("%d ",*(q-3));
    printf("%d ",q-p);
    printf("%d ",p<q);
    printf("%d",*p<*q);
}
