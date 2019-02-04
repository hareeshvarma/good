#include<stdio.h>
int main()
{
int n,s,i,j,m,t[1000],sum[1000],k,count=0;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&t[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<=n;j++)
{
if(t[i]>t[j])
{
s=t[i];
t[i]=t[j];
t[j]=s;
}
}
}
while(count==0)
{
for(i=0;i<n;i++)
{
    sum[i]=t[i]-m;
    }
for(int y=0;y<n;y++)
{
for(int r=y+1;r<=n;r++)
{
if(sum[i]>sum[j])
{
k=sum[y];
sum[y]=sum[r];
sum[r]=k;
}
}
}
int p=3;
for(int w=0;w<p;w++)
{if(sum[w]!=0)
{
printf("%d ",sum[w]+m);
count++;
}
if(sum[w]==0)
{
    p++;
}
}
}
}

