#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i,c,sum=0;
printf("enter any two value ");
scanf("%d%d",&a,&b);
for(i=1;i<b;i++)
{
c=a*a;
sum=sum+c;
}

printf("%d",sum);

return 0;
}
