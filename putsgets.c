#include<stdio.h>
#include<string.h>
int main(){
    char str1[10],str2[10],str3[20];
    gets(str1);
    gets(str2);
    printf("%d\n",strlen(str1));
    printf("%d\n",strlen(str2));
    puts(strcat(str2,str1));
    puts(strcpy(str3,str2));
    puts(strupr(str3));
    puts(strlwr(str3));
    strcmp(str1,str2);
    return 0;
}