#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("\n enter the character:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
printf("%c is a vowel",ch);
else
printf("%c is not a vowel");
getch();
return 0;
}
