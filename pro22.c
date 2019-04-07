#include<stdio.h>
void main()
{
int n,a[100],i,sum,h=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n-1;i++)
{
sum=a[i]+a[i+1];
if(h<sum)
{h=sum;
}
}
printf("%d",h);
}
