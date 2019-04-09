#include<stdio.h>
void main()
{
int q,w,k,n,i,j,count=0;
scanf("%d %d",&q,&w);
long a[q][w];
for(i=0;i<q;i++)
{
for(j=0;j<w;j++)
{
scanf("%d",&a[i][j]);
}}
for(i=0;i<q;i++)
{
for(j=0;j<w;j++)
{
if(a[i][j]==0)
{
n=i;
k=j;
for(j=0;j<w;j++)
{

a[n][j]=0;
}
for(i=0;i<q;i++)
{
a[i][k]=0;
}
}
}}
for(i=0;i<q;i++)
{
for(j=0;j<w;j++)
{
printf("%d ",a[i][j]);
if(j==w-1)
{
    printf("\n");
}
}}
}
