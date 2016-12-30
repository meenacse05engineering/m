#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
printf("\n enter the positive integer");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum+=i;
}
printf("sum=%d",sum);
return 0;
}


