#include<stdio.h>
#iclude<conio.h>
int<void>
{
clrscr;
int a,b,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("%d\t%d",a,b);
return 0;
getch;
}
