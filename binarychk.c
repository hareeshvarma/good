#include<stdio.h>
#include<string.h>
int main()
{
int i,count=0,m;
char n[100];
scanf("%s",&n);
m=strlen(n);
for(i=0;i<m;i++)
{
if(n[i]=='0' || n[i]=='1')
{count++;}
}
if(count==m)
{printf("yes");
}
else
    {printf("no");}

}
