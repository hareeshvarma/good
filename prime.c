#include <stdio.h>
int main()
{
    int n,i,count=0,j,x;
    printf("Enter the number");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	     count=0;
	 if(n%i==0)
	 {
	     x=i;

	     for(j=1;j<=x;j++)
	     {
	         if(x%j==0)
	         {
	             count++;
	         }
	     }
	     if(count==2)
	     {
	         printf("%d ",i);
	     }
	 }
	}
}
