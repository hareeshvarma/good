#include<stdio.h>
int main()
{
int n,m,sum=1,g;
scanf("%d %d",&n,&m);
if(n==1)
{
printf("yes");
n=0;
}
while(n>0)
{
g=0;
sum=sum*m;
g=n-sum;
if(sum==n)
{printf("yes");
n=0;}
if(g<=0)
{printf("no");
n=0;}}}
