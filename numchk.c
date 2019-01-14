#include<stdio.h>
#include<string.h>
int main()
{
int n,m,i,count=0;
scanf("%d %d",&n,&m);
int a[n];
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{
if(a[i]==m)
{count++;}
}
if(count>0)
{
    printf("yes");
}
else{printf("no");}
}

