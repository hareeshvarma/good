#include<stdio.h>
#include<conio.h>
int main()
{

int  a,b,n=0,same,i,r,reg, sum=0;
printf("enter the any value: ");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
    {
     n=i;
while(n!=0)
{
r=n%10;
reg=r*r*r;
sum=sum+reg;
n=n/10;
}

if(i==sum)
{printf("%d ",sum);
}
sum=0;
}

return 0;
}
