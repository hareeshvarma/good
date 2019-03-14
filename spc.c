#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
gets(s);
int count=0,i;
for(i=0;s[i]!='\0';i++)
{if(s[i]==' ')
 count++;
}
printf("%d",count);
}
