#include<stdio.h>
void main()
{
clrscr;
int a[10],i,j,temp,n;
printf("enter limit");
scanf("%d",&n);
printf("enter number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=a[0];
for(i=0;i<n;i++)
{
if(temp<a[i])
{
temp=a[i];
}

}

printf("%d",temp);
return 0;
getch;
}
