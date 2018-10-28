#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,result=1;
printf("enter any  value: ");
scanf("%d",&n);
i=1;
while(i<=n)
{
result=result*i;
i++;
}
printf("%d",result);
getch();
return 0;
}
