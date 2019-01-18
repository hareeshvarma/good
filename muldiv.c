#include<stdio.h>
int main()
{
int n,i,sum=1,div;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{sum=sum*a[i];
}
for(i=0;i<n;i++)
{
div=sum/a[i];
a[i]=div;
}
for(i=0;i<n;i++)
{printf("%d ",a[i]);}
}
