#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
int m,h,count=0,i;
scanf("%s",&n);
scanf("%s",&m);
h=strlen(n);
for(i=0;i<h;i++)
{
   if(n[i]==m)
{count++;}

}
printf("%d",count);
}
