#include<stdio.h>
#include<conio.h>
int main()
{
int n,count=0,r;
scanf("%d",&n);
while(n>0)
{
r=n/10;

n=r;
count++;
}
printf("%d",count);
return 0;
}
