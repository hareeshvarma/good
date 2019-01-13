#include<stdio.h>
int main()
{
int n,m,sub;
scanf("%d %d",&n,&m);
sub=n-m;
if(sub%2==0)
{printf("even");}
if(sub%2==1)
{printf("odd");}
}
