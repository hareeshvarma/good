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
for(k=0;k<1;k++)
{


for(n=0;n<w;n++)
{ int i=0;
count=0;
for(i=0;i<q;i++)
{
   int j=0;
for(j=0;j<w;j++)
{
if(a[k][n]==a[i][j])
{
count++;}
}}
if(count>=q)
{printf("%d",a[k][n]);
}
}}
}
