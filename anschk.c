#include<stdio.h>
int main()
{
int n,l,r,i,count=0;
scanf("%d",&n);
scanf("%d %d",&l,&r);
for(i=l;i<=r;i++)
{

if(n==i)
{printf("yes");
count++;
r=0;
}
}
if(count==0)
{printf("no");}
}
