#include<stdio.h>
void main()
{
int n,i,j,a[100],sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
for(j=0;j<i;j++)
{if(a[j]<a[i])
{
sum=sum+a[j];}}
}
printf("%d",sum);
}
