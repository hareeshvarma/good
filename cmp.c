#include<stdio.h>
#include<string.h>
int main()
{
char n[100],m[1000];
gets(n);
strcpy(m,n);
strrev(m);
if(strcmp(n,m)==0)
{
printf("yes");
}
else{printf("no");}
return 0;
}
