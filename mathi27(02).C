#include<stdio.h>
void main()
{.
clrscr;
char s[10],i;
printf("enter a string");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>'a')&&(s[i]<'z'))
{
printf("no numeric");

}
else
{
    printf("%c\n",s[i]);
    return 0;
    getch;
}
}}
