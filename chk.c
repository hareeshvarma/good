#include<stdio.h>
#include <conio.h>
int main()
{
int n,i,j,a[100],t,k,g;
printf("enter the limit value: ");
scanf("%d",&n);

for(k=0;k<n;k++)
{
    scanf("%d",&a[k]);
}
for(g=0;g<n;g++)
{
if(g%2==0)
{
if(a[g]%2==1)
{printf("%d ",a[g]);
}
}
else if(a[g]%2==0)
{printf("%d ",a[g]);
}
}
return 0;
}
