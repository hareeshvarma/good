#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
gets(s);
int i,j,l,n;
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==' '||s[i]=='\0')
{
    n=i;
for(j=i-1;j>=0;j--)
{
printf("%c",s[j]);
}
}
}
for(i=l;i>n;i--)
{
    printf("%c",s[i]);
}
return 0;
}
