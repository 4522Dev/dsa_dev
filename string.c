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
// #include <stdio.h>
//     int input (char str[],int n)
//     {
//         int ch,i=0;
//     while ((ch=getchar())!='\n')
//     if(i<n)
//     str[i++]=ch;
//     str[i]='\0';
//     return i;
    
// }
// void main()

// {
//     char str[100];
//     int n=input(str,5);
//     printf("%d %s",n,str);
    
// }
// #include<stdio.h>
// void main()
// {
//     int ch;
//     for(ch='A';ch<='Z';ch++)
//         putchar(ch);
//     // printf("%c", '\n');//n
// 	// printf("%c","\n");//n(-->d ??)
// 	// putchar('\n');//y
// 	// putchar("\n");//n
//     // puts('\n');//n
//     // puts("\n");//y
// 	// printf("%s",'\n');//n
// 	// printf("%s",'\n");//n
// }
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char s1[10]="hello";
//     char s2[10];
//     printf("%s \n",strcpy(s2,s1));
//     printf("%s",s2);
// }
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char s1[10]="hello";
//     char s2[10];
//     char s3[10];
//     printf("%s \n",strcpy(s3,strcpy(s2,s1)));
//     printf("%s %s",s2,s3);
// }
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char s1[6]="hello";
//     char s2[4];
//     strncpy(s2,s1,sizeof(s2)-1);
//     printf("%s",s2);
// } 
// #include<stdio.h>
// #include<string.h>
// void main()
// {
// char str1[100],str2[100];
// strcpy(str1, "Good ");
// strcpy(str2,"Morning");
// strcat(str1,str2);
// printf("%s",str1);
// }
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char s1[5],s2[10];
//     strcpy(s1,"abcd");
//     strcpy(s2,"abce");
//     if(strcmp (s1,s2)<0)
//         printf("s1 is less than s2");
//     else 
//         printf("s1 is greater than or equal to s2");
// }
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[20];
//     int i;
//     char *s = "string";
//     int length =strlen(s);
//     for(i=0;i<length;i++)
//         a[i]=s[length-i];
//     printf("%c",a);
// }
#include<stdio.h>
#include<string.h>
void main()
{
    char a[]= "GATE2023";
    char *p= a;
    printf("%s",a);
    // printf("%c",a+a[1]-a[3]);
}