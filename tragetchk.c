#include<stdio.h>
int main()
{
int n,m,i,j,sum;
scanf("%d %d",&n,&m);
int a[n];
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{
for(j=0+i;j<n;j++)
{
sum=a[i]+a[j];
if(m==sum)
{printf("yes");
n=0;
}
}
}
if(sum!=m)
{
    printf("no");
}
}
