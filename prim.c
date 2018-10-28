#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,count=0;
printf("enter any value: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("it's prime number");
}
else
{
    printf("it's not a prime");
}
getch();
return 0;
}
