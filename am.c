#include<stdio.h>
#include<conio.h>
int main()
{
int n,j,r,c,sum=0;
printf("enter the any value: ");
scanf("%d",&n);
j=n;
while(n>0)
{
r=n%10;
c=r*r*r;
sum=sum+c;
n=n/10;
}
n=j;
if(n==sum)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
