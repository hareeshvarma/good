#include<stdio.h>
#include<conio.h>
int main()
{
int arr[12],n,i,large;
printf("enter the size : ");
scanf("%d",&n);
printf("enter %d element :",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
large=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>large);
{
large=arr[i];
}
}
printf("%d",large);

return 0;
}
