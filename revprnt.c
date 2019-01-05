#include<stdio.h>
#include<conio.h>
int main()
{
int n,k,i,g,a[100];
printf("enter the values: ");
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
g=n-k;
for(i=g;i<n;i++)
{printf("%d ",a[i]);
}
for(i=0;i<g;i++)
{printf("%d ",a[i]);
}
return 0;
}
