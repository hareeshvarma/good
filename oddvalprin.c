#include<stdio.h>
#include<string.h>
int main()
{
int m,i;
char n[100];
scanf("%s",&n);
m=strlen(n);
for(i=0;i<m;i++)
{
if(n[i]%2!=0)
{printf("%c",n[i]);}
}
}
