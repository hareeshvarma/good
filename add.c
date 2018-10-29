#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i,c;
printf("enter any two value:");
scanf("%d%d",&a,&b);
  c=b-1;
for(i=a;i<=c;i++)
{
if(i%2!=0)
{
printf("%d",i);
}
}
return 0;
}
