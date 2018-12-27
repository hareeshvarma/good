#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],sum,i;
printf("enter the value: \n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
sum=a[0];
for(i=1;i<10;i++)
{
if(a[i]>a[0])
{

a[0]=a[i];
}
}
printf("%d",a[0]);
return 0;
}
