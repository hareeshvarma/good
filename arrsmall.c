#include<stdio.h>
#include<conio.h>
int main()
{
int arr[12],n,i,small;
printf("enter the size : ");
scanf("%d",&n);
printf("enter %d element :",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
small=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]<small);
{
small=arr[i];
}
}
printf("%d",small);

return 0;
}
