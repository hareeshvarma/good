#include<stdio.h>
#include<string.h>
void main()
{
int l,i,count=0,j;
char a[100];
gets(a);
l=strlen(a);
int k=l*2;
for(i=0;i<l;i++)
{
for(j=l-1;j>=0;j--)
{
if(a[i]==a[j])
{
count++;
}
}}
printf("%d",count);
if(count==k||count==k-1||count==k-2)
{
printf("yes");
}
else{printf("no");}
}

