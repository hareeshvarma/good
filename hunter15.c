#include<stdio.h>
void main()
{
int n,a[10],i,h,l,r;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
h=a[0];
l=a[n-1];
int sum=0;
for(i=n-1;i>=0;i--)
{
if(sum<a[i])
{sum=a[i];
printf("%d",sum);
}}
for(i=1;i<n-2;i++)
{if(a[i]>h&&a[i]>l)
{r=a[i];}
else {if(h>l){r=h;} else{r=l;}}
}
printf("%d",r);
}
