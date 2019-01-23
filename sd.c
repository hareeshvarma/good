#include<stdio.h>
int main()
{
int n,i,sum=0;
scanf("%d",&n);
for(i=2;i<=n;i++)
{
sum=n%i;
if(sum==0)
{
if(i%2==0)
{
printf("%d ",i);
}
}
}
}
