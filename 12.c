#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,j,t,count=0,m,sum,a[100];
printf("enter the limit: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

t=n-1;
for(i=0;i<n;i++)
{
sum=a[i];
count=0;
for(j=0;j<n;j++)
{
m=a[j]-a[i];
if(m!=0)
{count++;}
}
if(count==t)
{printf("%d",sum);}
}
return 0;
}
