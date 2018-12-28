#include<stdio.h>
#include<conio.h>
int main()
{
int n,a=0,b=1,c,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{

c=a+b;
a=b;
b=c;
printf("%d ",a);
}
return 0;
}
