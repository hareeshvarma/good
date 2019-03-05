#include<stdio.h>
#include<string.h>
int main()
{
char a[1000],b[1000];
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("yes");
}
else
{printf("no");}
return 0;
}
