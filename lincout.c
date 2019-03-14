#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int count=0,i;
gets(s);

for(i=0;s[i]!='\0';i++)
{
if(!(s[i]>='a' && s[i]<='z'))
{
count++;
}
}
printf("%d",count+1);
}
