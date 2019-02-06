#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
int h,l;
char n[20];
scanf("%s",&n);
h=strlen(n);
if(h%2==0)
{
 l=h/2;
 n[l-1]='*';
n[l]='*';
printf("%s",n);
}
else {
        l=h/2;
    n[l]='*';
printf("%s",n);
}
}
