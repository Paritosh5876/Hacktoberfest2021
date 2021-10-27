#include<stdio.h>
#include<conio.h>
void main()
{
char str[10]; int l=0,flag,i;
clrscr();
printf("\n enter string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
l++;
}
for(i=0;i<l/2;i++)
{
if(str[i]==str[l-1-i])
{
flag=1;
}
else
{
printf("\n not palindrom");
flag =0;
}
break;
}
if(flag==1)
{
printf("\n palindrome");
}
}
