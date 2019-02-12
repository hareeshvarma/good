#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,count=0;
char s[100],s2[100];
scanf("%s",s);
scanf("%s",s2);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]!=s2[i])
{
count++;
}
}
if(count==1)
{
printf("yes");
}
if(count>1)
{
printf("no");
}
}
