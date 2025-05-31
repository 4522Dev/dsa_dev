#include <stdio.h>
#include <string.h>
#include<ctype.h>
char KEYS[10][20] = {"int", "float", "char"};
int main()
{
char str;
int addr = 2000;
FILE *fp;
fp = fopen("test.txt", "w");
printf("\n Enter a valid data: (End with $)\n"); while ((str = getchar()) != '$') {
fputc(str, fp);
}
fclose(fp);
fp = fopen("test.txt", "r"); str = fgetc(fp);
printf("Address\t\tDatatype\tSymbol\t\tValue\n"); 
while (str != EOF) {
int i = 0; switch (str) {
default:
if (isalpha(str)) {
char a[20];
do {
a[i] = str;
i++; str = fgetc(fp);
} while (isalpha(str) || isalnum(str)); a[i] = '\0';
fseek(fp, -1, 1);
for (i = 0; i < 10; i++) {
if (strcmp(a, KEYS[i]) == 0) {
// Getting datatype of the identifier 
char datatype[20]; strcpy(datatype, KEYS[i]);
i = 0; str = fgetc(fp);
do {
a[i] = str;
i++; str = fgetc(fp);
} while (isalpha(str) || isalnum(str)); a[i] = '\0';
fseek(fp, -1, 1);
// Getting Symbol of the identifier 
char symbol[20]; strcpy(symbol, a); while ((str=fgetc(fp)) == ' ') {} // Avoiding blanks
if (str != '=') {
printf("Wrong Syntax detected!\n");
break;
// exit();
}while ((str=fgetc(fp)) == ' ') {} // Avoiding blanks
i = 0;
do {a[i] = str;
i++; str = fgetc(fp);
} while (isalnum(str)); a[i] = '\0';
fseek(fp, -1, 1); char value[20]; strcpy(value, a);
printf("%d\t\t%s\t\t%s\t\t%s\n", addr, datatype, symbol, value);
if (strcmp(datatype, "int") == 0) {
addr += 2;
}
if (strcmp(datatype, "float") == 0) {
addr += 4;
}
if (strcmp(datatype, "char") == 0) {
addr += 1;
}
break;
}
}
}
}
str = fgetc(fp);
}
fclose(fp);
}
