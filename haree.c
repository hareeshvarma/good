#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter the value a:");
scanf("%d",&a);
if(a%2==0)
{
printf("even");
}
else if(a%2==1)
{
 printf("odd");
}
else
{
printf("invalid");
}
return 0;
}
