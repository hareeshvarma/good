#include<stdio.h>
#include<string.h>
int main()
{
    int i,m;
char n[1000];
scanf("%s",&n);
m=strlen(n);
for(i=0;i<m;i++)
{
    printf("%c",n[i]);
    i=i+2;
}
}
