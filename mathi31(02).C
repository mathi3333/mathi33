include<stdio.h>
void main()
{
clrscr;
char str[50],i,c=0;
printf("enter a character");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>'a' &&str[i]<'z')
{
c++;
}
}
printf("%d",c);
return 0;
getch;
}
