#include<stdio.h>
int main()
{
int n[100],l,sum=1,t,i,j;
scanf("%d",&l);
for(i=0;i<l;i++)
{
scanf("%d",&n[i]);
}
t=0;
for(i=l-1;i>=0;i--)
{
    sum=1;
for(j=i;j>=0;j--)
{
sum=sum*n[j];
}
if(sum>t)
{
t=sum;
}
}
printf("%d",t);
}
