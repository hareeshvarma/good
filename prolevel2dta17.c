#include<stdio.h>
int main()
{
int n,m,j,t=0,a[100];
scanf("%d %d",&n,&m);
for(j=0;j<n;j++)
{
    scanf("%d",&a[j]);
}
for(j=0;j<n-1;j++)
{
if(a[j]+a[j+1]==m)
{t++;}
}
if(t>=1)
{
printf("yes");
}
else{printf("no");
}}
