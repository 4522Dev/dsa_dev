// #include <string.h>
// #include <stdio.h>
// #include <ctype.h>
// #include <stdlib.h>
// char key[7][20] = {"void", "if", "while", "int", "main", "float", "double"};
// int main()
// {
//    int i, n = 1, add = 1000;
//    int label;
//    char a[20];
//    char str;
//    FILE *fp;
//    fp = fopen("t.c", "w");
//    printf("\n Enter a valid data:");
//    while ((str = getchar()) != 'z')
//    {
//       fputc(str, fp);
//    }
//    fclose(fp);
//    fp = fopen("t.c", "r");
//    printf("\t\tTOKEN Seperation\n");
//    printf("\nAddress TokenNo  TokenName   Tokentype\n");
//    while ((str = fgetc(fp)) != EOF)
//    {
//       i = 0;
//       label = 0;
//       switch (str)
//       {
//       case '{':
//          printf("\n%d\t%c\t a Special Symbol", n++, str);
//          break;
//       case '}':
//          printf("\n%d\t%c\t a Special Symbol", n++, str);
//          break;
//       case '(':
//          printf("\n%d\t%c\t a Special Symbol", n++, str);
//          break;
//       case ')':
//          printf("\n%d\t%c\t a Special Symbol", n++, str);
//          break;
//       case ';':
//          printf("\n%d\t%c\t a Special Symbol", n++, str);
//          break;
//       case '*':
//          printf("\n%d\t%c\t a Multiplication Operator", n++, str);
//          break;
//       case '=':
//          printf("\n%d\t%c\t a assignment operator", n++, str);
//          break;
//       case '+':
//          printf("\n%d\t%c\t a addition operator", n++, str);
//          break;

//       case '#':
//          printf("\n%d\t%c\t a pre-processor", n++, str);
//          break;
//       default:
//          if (isalpha(str))
//          {
//             do
//             {
//                a[i] = str;
//                i++;
//                str = fgetc(fp);
//             } while (isalpha(str) || isalnum(str));
//             a[i] = '\0';
//             fseek(fp, -1, 1);
//             for (i = 0; i < 5; i++)
//             {
//                if (strcmp(a, key[i]) == 0)
//                {
//                   if (key[i] == "int")
//                   {
//                      add = add + 2;
//                      printf("\n%d\t%s\t a keyword", add, a);
//                   }
//                   else if (key[i] == "float")
//                   {
//                      add = add + 2;
//                      printf("\n%d\t%s\t a keyword", add, a);
//                   }
//                }
//                else if (key[i] == "double")
//                {
//                   add = add + 4;
//                   printf("\n%d\t%s\t a keyword", add, a);
//                }
//             }
//             label = 1;
//             break;
//          }
//       }
//       if (label == 0)
//       {
//          printf("\n%d\t%s\t an identifier", n++, a);
//       }
//    }
//    else if (isdigit(str))
//    {
//       do
//       {
//          a[i] = str;
//          i++;
//          str = fgetc(fp);
//       } while (isdigit(str));
//       a[i] = '\0';
//       fseek(fp, -1, 1);
//       printf("\n%d\t%s\t a constant", n++, a);
//    }
// }
// fclose(fp);
// }


// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// char key[5][20]={"void","if","while","int","main"};
// int main()
// {
//  int i,j,n=1,s=1,addr=3000;
//  int label;
//  char a[20];
//  char st[50][3][20]={"Address","Variable Name","Token Type"};
//  char str;
//  FILE *fp;
//  fp=fopen("t.c","w");
//  printf("\n Enter a valid data:");
//  while((str=getchar())!='z')
//   {
//     fputc(str,fp);
//    }
//    fclose(fp);
//    fp=fopen("t.c","r");
//    //printf("\t\tTOKEN Seperation\n");
//    //printf("\n TokenNo  TokenName   Tokentype\n");
//    while((str=fgetc(fp))!=EOF)
// 	    {
//      i=0;label=0;
//      switch(str)
//       {
//        case '{':
//           //printf("\n\t%d\t%c\t a Special Symbol",n++,str);
//            sprintf(st[s][0], "%d", addr++);
//            strcpy(st[s][1],"{");
//            strcpy(st[s][2], "Special Symbol");
//             s++;
//           break;
//        case '}':
//            //printf("\n\t%d\t%c\t a Special Symbol",n++,str);
//            sprintf(st[s][0], "%d", addr++);
//            strcpy(st[s][1],"}");
//            strcpy(st[s][2], "Special Symbol");
//            s++;
//           break;
//        case '(':
//              //printf("\n\t%d\t%c\t a Special Symbol",n++,str);
//              sprintf(st[s][0], "%d", addr++);
//             strcpy(st[s][1],"(");
//             strcpy(st[s][2], "Special Symbol");
//             s++;
//            break;
//        case ')':
//            // printf("\n\t%d\t%c\t a Special Symbol",n++,str);
//             sprintf(st[s][0], "%d", addr++);
//            strcpy(st[s][1],")");
//            strcpy(st[s][2], "Special Symbol");
//            s++;
//           break;
//        case ';':
//           //printf("\n\t%d\t%c\t a Special Symbol",n++,str);
//           sprintf(st[s][0], "%d", addr++);
//            strcpy(st[s][1],";");
//            strcpy(st[s][2], "Special Symbol");
//            s++;
//           break;
//        case '*':
//           //printf("\n\t%d\t%c\t a Multiplication Operator",n++,str);
//           sprintf(st[s][0], "%d", addr++);
//            strcpy(st[s][1],"*");
//            strcpy(st[s][2], "Operator");
//            s++;
//           break;
//        case '=':
//            //printf("\n\t%d\t%c\t a assignment operator",n++,str);
//            sprintf(st[s][0], "%d", addr++);
//            strcpy(st[s][1],"=");
//            strcpy(st[s][2], "Operator");
//            s++;
//            break;
//        case '+':
//            //printf("\n\t%d\t%c\t a addition operator",n++,str);
//            sprintf(st[s][0], "%d", addr++);
//            strcpy(st[s][1],"+");
//            strcpy(st[s][2], "Operator");
//            s++;
//           break;

//        case '#':
//             //printf("\n\t%d\t%c\t a pre-processor",n++,str);
//             sprintf(st[s][0], "%d", addr++);
//             strcpy(st[s][1],"#");
//             strcpy(st[s][2], "Operator");
//             s++;
//           break;
//           default:
//      if(isalpha(str))
//       {
//        do
//         {
//           a[i]=str;
//           i++;
//           str=fgetc(fp);
//          }
//       while(isalpha(str)||isalnum(str));
//       a[i]='\0';
//       fseek(fp,-1,1);
//       for(i=0;i<5;i++)
//        {
//          if(strcmp(a,key[i])==0)
//           {
//             //printf("\n\t%d\t%s\t a keyword",n++,a);
//             sprintf(st[s][0], "%d", addr++);
//             strcpy(st[s][1],a);
//             strcpy(st[s][2], "Keyword");
//             s++;
//             label=1;
//             break;
//            }
//           }
//       if(label==0)
//        {
//          //printf("\n\t%d\t%s\t an identifier",n++,a);
//             sprintf(st[s][0], "%d", addr++);
//             strcpy(st[s][1],a);
//             strcpy(st[s][2], "Identifier");
//             s++;
//         }
// }
//  else if(isdigit(str))
//   {
//    do
//     {
//      a[i]=str;
//      i++;
//      str=fgetc(fp);
//      }
//      while(isdigit(str));
//      a[i]='\0';
//      fseek(fp,-1,1);
//      //printf("\n\t%d\t%s\t a constant",n++,a);
//             sprintf(st[s][0], "%d", addr);
//             strcpy(st[s][1],a);
//             strcpy(st[s][2], "Constant");
//             s++;
//     addr+=2;
//     }
//   }
// }
// printf("%s\t%s\t%s\n", st[0][0], st[0][1], st[0][2]);
// for(j=1; j < s; j++) {
//     printf("%s\t%s\t\t%s\n", st[j][0], st[j][1], st[j][2]);
// }
// fclose(fp);
// }
#include <string.h>
#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
char key[5][20] = {"void", "if", "while", "int", "main"};
int main()
{
    int i, n = 1;int add=1000;
    int label;
    char a[20];
    char str;
    FILE *fp;
    fp = fopen("t.c", "w");
    printf("\n Enter a valid data:");
    while ((str = getchar()) != 'z')
    {
        fputc(str, fp);
    }
    fclose(fp);
    fp = fopen("t.c", "r");
    printf("\t\tTOKEN Seperation\n");
    printf("\nAddress TokenNo  TokenName   Tokentype\n");
    while ((str = fgetc(fp)) != EOF)
    {
        i = 0;
        label = 0;
        switch (str)
        {
        case '{':
            printf("\n%d\t%d\t%c\t a Special Symbol",add, n++, str);
            break;
        case '}':
            printf("\n%d\t%d\t%c\t a Special Symbol",add,n++, str);
            break;
        case '(':
            printf("\n%d\t%d\t%c\t a Special Symbol",add, n++, str);
            break;
        case ')':
            printf("\n%d\t%d\t%c\t a Special Symbol",add, n++, str);
            break;
        case ';':
            printf("\n%d\t%d\t%c\t a Special Symbol",add, n++, str);
            break;
        case '*':
            printf("\n%d\t%d\t%c\t a Multiplication Operator",add, n++, str);
            break;
        case '=':
            printf("\n%d\t%d\t%c\t a assignment operator",add, n++, str);
            break;
        case '+':
            printf("\n%d\t%d\t%c\t a addition operator",add, n++, str);
            break;

        case '#':
            printf("\n%d\t%d\t%c\t a pre-processor",add, n++, str);
            break;
        default:
            if (isalpha(str))
            {
                do
                {
                    a[i] = str;
                    i++;
                    str = fgetc(fp);
                } while (isalpha(str) || isalnum(str));
                a[i] = '\0';
                fseek(fp, -1, 1);
                for (i = 0; i < 5; i++)
                {
                    if (strcmp(a, key[i]) == 0)
                    {
                        //add=1000;
                        // printf("\n%d\t%s\t a keyword", n++, a);
                        if (key[i] == "int")
                        {
                            // add = add + 2;
                            printf("\n%d\t%d\t%s\t asarimmmmmmmmmmmmm",4,n++, a);
                         //  printf("\n%d\t%d\t%s\t a keyword", add,n++, a);
                        }
                        else if (key[i] == "float")
                        {
                        //    add = add + 2;
                            printf("\n%d\t%d\t%s\t a keyword",add+=2, n++, a);
                           
                        }
                        else if (key[i] == "double")
                        {
                        //    add = add + 4;
                           printf("\n%d\t%d\t%s\t a keyword",add+=4, n++,a);
                        }
                        else{
                            printf("\n%d\t%d\t%s\t a keyword",add, n++, a);
                        }
                        label = 1;
                        break;
                    }
                }
                if (label == 0)
                {
                    printf("\n%d\t%d\t%s\t an identifier",add, n++, a);
                }
            }
            else if (isdigit(str))
            {
                do
                {
                    a[i] = str;
                    i++;
                    str = fgetc(fp);
                } while (isdigit(str));
                a[i] = '\0';
                fseek(fp, -1, 1);
                printf("\n%d\t%d\t%s\t a constant",add,n++, a);
            }
        }
    }
    fclose(fp);
}