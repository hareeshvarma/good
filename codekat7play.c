#include<stdio.h>
#include<string.h>
int main()
{
int l,sam,reg;
char s[100];
gets(s);
l=strlen(s);
if(l>1)
{
sam=s[0];
s[0]=s[1];
s[1]=sam;
reg=s[2];
s[2]=s[3];
s[3]=reg;
}
puts(s);
}
