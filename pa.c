#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,yug,r;
printf("enter the any value: ");
scanf("%d",&n);
yug=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
n=yug;
if(sum==n)
{printf("yes");
}
else
{
printf("no");
}
return 0;

  
}
