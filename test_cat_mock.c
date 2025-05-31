/*
#include<stdio.h>
int addition(int,int,int,int);
int subraction(int,int,int,int);
int multiplication(int,int,int,int);
int division(int,int,int,int);
int main()
{
	int a,b,c,d,add;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	addition(a,b,c,d);
	subraction(a,b,c,d);
	multiplication(a,b,c,d);
	division(a,b,c,d);
}
int addition(int a,int b,int c,int d)
{
	int x,y,z,ad,m,num,den,g,cc=0;
	x=a*d;
	y=b*c;
	z=b*d;
	ad=x+y;
	if (ad < z){
      g = ad;
   } 
   else 
   {
      g = z;
   }
   while (g > 1) 
   {
      if (ad % g == 0 && z % g == 0)
         break;
      g--;
   }
   printf("%d/%d", ad / g, z / g);
   return 0;
}
int subraction(int a,int b,int c,int d)
{
	int x,y,z,ad,m,num,den,g,cc=0;
	x=a*d;
	y=b*c;
	z=b*d;
	ad=x-y;
	if (ad < z){
      g = ad;
   } 
   else 
   {
      g = z;
   }
   while (g > 1) 
   {
      if (ad % g == 0 && z % g == 0)
         break;
      g--;
   }
   printf("\n");
   printf("%d/%d", ad / g, z / g);
   return 0;
}
int multiplication(int a,int b,int c,int d)
{
	int x,y,z,num,den,g;
	float cc,m,ad;
	x=a*c;
	y=d*b;
	num=y;
	if (x < y){
      g = x;
   } 
   else 
   {
      g = y;
   }
   while (g > 1) 
   {
      if (x % g == 0 && y % g == 0)
         break;
      g--;
   }
   printf("\n");
   printf("%d/%d", x / g, y / g);
   return 0;
}
int division(int a,int b,int c,int d)
{
	int x,y,z,ad,m,num,den,g,cc;
	x=a*d;
	y=b*c;
	if (x < y){
      g = x;
   } 
   else 
   {
      g = y;
   }
   if (x== 0 || y == 0)
   {
      printf("DIVIDE BY ZERO ERROR!!!");
   }
   while (g > 1) 
   {
      if (x % g == 0 && y % g == 0)
         break;
      g--;
   }
   printf("\n");
   printf("%d/%d", x / g, y / g);
   return 0;
}*/
#include<stdio.h>

int add(int a, int b, int c, int d)
{
    int e,f,i,l;
    e=((a*d)+(c*b));
    f=b*d;
    for (i=1;i<=e && i<=f;i++)
    {
        if(e%i==0 && f%i==0)
        {
            l=i;
        }
    }
    printf("%d/%d \n",(e/l),(f/l));
}

int sub(int a, int b, int c, int d)
{
    int e,f,i,l;
    e=((a*d)-(c*b));
    f=b*d;
    for (i=1;i<=e && i<=f;i++)
    {
        if(e%i==0 && f%i==0)
        {
            l=i;
        }
    }
    printf("%d/%d \n",(e/l),(f/l));
}

int mul(int a, int b, int c, int d)
{
    int e,f,i,l;
    e=(a*c);
    f=b*d;
    for (i=1;i<=e && i<=f;i++)
    {
        if(e%i==0 && f%i==0)
        {
            l=i;
        }
    }
    printf("%d/%d \n",(e/l),(f/l));
}

int div(int a, int b, int c, int d)
{
    int e,f,i,l;
    e=(a*d);
    f=(b*c);
    for (i=1;i<=e && i<=f;i++)
    {
        if(e%i==0 && f%i==0)
        {
            l=i;
        }
    }
    printf("%d/%d \n",(e/l),(f/l));
}

int main()
{
    int a,b,c,d;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    if(b==0){
        printf("DIVIDE BY ZERO ERROR");
    }
    if(d==0)
    {
        printf("DIVIDE BY ZERO ERROR");
    }
    else{
        add(a,b,c,d);
        sub(a,b,c,d);
        mul(a,b,c,d);
        div(a,b,c,d);
    }

    return 0;
}