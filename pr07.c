#include<stdio.h>
void main()
{
int n,sum=1,g;
scanf("%d",&n);
while(n>3)
{
sum=sum*2;
g=n-sum;
if(g==0)
{
printf("%d",g);
n=2;
}
else if (g==1)
{
printf("%d",g);
n=2;
}}}
