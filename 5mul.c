#include<stdio.h>
#include<conio.h>
int main()
{
int n, sum,i;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=i*n;
printf("%d",sum);
}
return 0;
}
