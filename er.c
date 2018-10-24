#include<stdio.h>
#include<conio.h>
int main()

{

int n, count=0;
printf("enter the any value :");
scanf("%d",&n);
while(n!=0)
{
count++;
n=n/10;
}
printf("total digits:%d",count);
return 0;

}
