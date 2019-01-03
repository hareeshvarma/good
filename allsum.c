#include<stdio.h>
#include<conio.h>
int main()
{
int n,a[100],i,j,sum=0,r;
printf("enter the limit: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
for(j=0;j<n;j++)
{
sum=sum+a[j];
}
r=sum/n;

printf("%d",r);
return 0;

}
