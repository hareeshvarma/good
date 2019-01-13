#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the number: ");
scanf("%d",&n);
for(i=1;i<10;i++)
{sum=n+i;
if(sum%10==0)
{printf("%d",sum);}
}
}
