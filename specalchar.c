#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
char s[100];
gets(s);
int i,count=0;
for(i=0;s[i]!='\0';i++)
{
if(!(isalnum(s[i])))
{
count++;
}}
printf("%d",count);
}
