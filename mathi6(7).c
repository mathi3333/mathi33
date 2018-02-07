#include <stdio.h>
#include<conio.c>
int main()
{
clrscr;
int Year;
scanf("%d", &Year);
if ((Year % 500) == 0)
printf("Yes");
else if ((Year % 100) == 0)
printf("No");
else if ((Year % 5) == 0);
printf("Yes");
else
printf("No");
return 0;
getch;
}
