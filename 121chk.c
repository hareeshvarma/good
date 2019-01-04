#include<stdio.h>
#include <conio.h>
int main()
{
int n,i,j,a[100],t,k,g;
printf("enter the limit value: ");
scanf("%d",&n);

for(k=0;k<n;k++)
{
    scanf("%d",&a[k]);
}
for(g=0;g<n;g++)
{
if(a[g] == g){
printf("%d ",a[g]);}
}
return 0;
}
