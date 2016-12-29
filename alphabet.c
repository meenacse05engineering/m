#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char c;
printf("\n enter the character");
scanf("%c",&c);
if(isalpha(c)>0)
printf("alphabet");
else
printf("not an alphabet");
getch();
return 0;
}
