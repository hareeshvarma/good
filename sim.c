#include<stdio.h>
int main()
{
int n,t[100],m,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&t[i]);
}
for(i=0;i<n;i++)
    {
for(j=1+i;j<n;j++)
{
    if(t[i]>t[j])
    {
    m=t[i];
t[i]=t[j];
t[j]=m;
}}
}
for(j=0;j<n;j++)
{
printf("%d ",t[j]);
}
}
