#include<stdio.h>
int main()
{
    int n,m,i,count=0,a[100];
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]>=m)
    {
        count++;
    }
}
printf("%d",count);
return 0;
}
