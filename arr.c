#include<stdio.h>
#include<conio.h>
int main()
{

int k,i,sum=0;
int arr[5]={1,2,3,4,5};
scanf("%d",&k);
for(i=0;i<k;i++)
{
sum=sum+arr[i];
}
printf("%d",sum);
return 0;
}
