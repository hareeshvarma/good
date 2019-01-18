#include<stdio.h>
int main()
{
int n,sum=1,g;
scanf("%d",&n);
if(n==1)
{printf("yes");}
while(n>1)
{
sum=2*sum;
g=n-sum;
if(sum==n)
{printf("yes");
n=0;
}
if(g<0)
{printf("no");
n=0;
}
}
}
