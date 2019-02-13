#include<stdio.h>
#include<string.h>
int main()
{
int count=0,l,t=0,i,j;
char s[100],m;
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
for(j=0;j<l;j++)
{
if(s[i]==s[j])
{
count++;
}
}
if(count>t)
{
t=count;
m=s[i];
}
}

printf("%c",m);
}
