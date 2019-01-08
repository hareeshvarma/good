#include<stdio.h>
int main()
{
int i,m;
char a[10];
scanf("%s",&a);
m=strlen(a);
for(i=0;i<m;i++)
{
printf("%c\t",a[i]);
}

}
