#include<stdio.h>
int main()
{
int a[100],n,i,j,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int sum=a[0];
for(i=0;i<3;i++)
{
  int l=i+1;
if(a[i]<a[l])
{
 sum=sum+a[l];
 count++;
 }
 else{i=5;}
}
if(count>0)
{printf("%d",sum);}
else{printf("0");}
}


