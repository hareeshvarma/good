#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i,j,count=0,n=0;
printf("enter the limit values: ");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
count = 0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
count++;
}
}

if(count==2)
{
n++;
}

}
printf("%d",n);

return 0;
}
