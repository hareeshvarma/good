
#include<stdio.h>
#include <conio.h>
int main()
{
int n,i,j,a[1000],t,k,g;
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
if(a[j]==a[i])
{
printf("%d ",a[i]);
}
}
}


return 0;
}
