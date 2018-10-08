#include<stdio.h>
#include<conio.h>
int main()
{
char sub;
printf("enter the letter:");
scanf("%c",&sub);
if(sub>='a' && sub<='z' || sub>='A' && sub<='Z')
{
printf("ALPHABET");
}
else{
printf("NO");
}
    return 0;
}
