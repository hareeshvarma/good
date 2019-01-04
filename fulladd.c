#include<stdio.h>
#include<conio.h>
int main()
{
int n,r,mul,sum=0;
scanf("%d",&n);
while(n>0)
{
r=n%10;
mul=r*r;
sum=sum+mul;
n=n/10;
}
printf("%d",sum);
return 0;

}
