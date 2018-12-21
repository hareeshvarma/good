#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,d,l=0,sum=0;
scanf("%d %d %d",&n,&a,&d);
l=(n*d)+a-1;
sum=((a+l)*n)/2;
printf("%d",sum);
return 0;
}
