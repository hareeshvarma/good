#include<stdio.h>
int main()
{
int n,m[100],i,j,sum;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
sum=m[i]+m[j];
if(sum==0)
{
printf("%d %d",m[i],m[j]);
n=0;
}
}
}
}
