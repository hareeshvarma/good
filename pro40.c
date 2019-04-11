#include<stdio.h>
#include<string.h>
void main()
{
int i,j,l,count=0;
char s[100]=("dhoni");
l=strlen(s);
char t[20];
scanf("%s",t);
for(i=0;i<l;i++)
{
for(j=0;j<l;j++)
{
if(t[j]==s[i])
{
count++;
}
}
}
if(count==l)
{
printf("yes");
}
else{printf("no");}
}
