#include<stdio.h>
int main()
{
int n[10],i,sum,h;
for(i=0;i<10;i++)
{scanf("%d",&n[i]);
}
h=n[0];
for(i=1;i<10;i++)
{
if(n[i]<h)
{h=n[i];
}
}
printf("%d",h);
}
