#include<stdio.h>

int main()
{
int n,m,i,j,count=0;
char a[1000],b[1000];
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<m;i++)
{scanf("%d",&b[i]);}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{count++;}
}
}
if(count==m)
{
printf("yes");
}
else{printf("no");}
}
