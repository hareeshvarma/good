
#include <stdio.h>

int main(void) {
	int n,m,i,j,k,count=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=j*j;
			if(k==i)
			{
				count=count+1;

			}
		}
	}
	printf("%d",count);
	return 0;
}
