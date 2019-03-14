#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
char n[100];
gets(n);
int count=0,i;
for(i=0;n[i]!='\0';i++)
{

if(isdigit(n[i]))
{
    count++;
}

}
printf("%d",count);
}
