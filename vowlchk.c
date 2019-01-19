#include<stdio.h>
#include<string.h>
int main()
{
int i,l,count=0;
char n[1000];
scanf("%s",&n);
l=strlen(n);

for(i=0;i<l;i++)
{
if(n[i]=='a' ||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u')
{count++;
}
}
if(count>0)
{
    printf("yes");}
else{printf("no");}
}
