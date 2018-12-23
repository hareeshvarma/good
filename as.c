#include<stdio.h>
#include <conio.h>
int main()
{
int n,i,j,a[30],t,k,g;
printf("enter the limit value: ");
scanf("%d",&n);

for(k=0;k<n;k++)
{
    scanf("%d",&a[k]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]>a[i])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(g=0;g<n;g++)
{printf("%d",a[g]);}

return 0;
}
