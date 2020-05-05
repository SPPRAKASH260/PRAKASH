#include<stdio.h>
//hi fg
void main()
{
char ch;
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("vowel");
}
else
{
printf("consonant");
}
}
else
{
printf("invalid character");
}
}
