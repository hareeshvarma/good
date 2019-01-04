#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=1,g;
scanf("%d",&n);
while(n>0)
{
sum=2*sum;
g=n-sum;
if(n==sum)
{
printf("yes");
n=0;
}

else if(g<0)
{
printf("no");
n=0;
}}
return 0;
}
