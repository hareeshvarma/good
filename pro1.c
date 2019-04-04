#include<stdio.h>
#include<string.h>
void main()
{
char x[100],y[100];
int count=0,i,l;
printf("enter the first word x\n");
gets(x);
printf("enter the second word y\n");
gets(y);
l=strlen(y);
for(i=0;i<l;i++)
{
if(x[i]!=y[i])
{
count++;
}
}
printf("%d",count);
}
