//write a program to find out the lenght of a string 
#include<stdio.h>
void main()
{
	char s[20];
	int i,count=0;
	printf("enter a string:");
	gets(s);
	for(i=0;s[i]!=0;i++)
	if(s[i]==32)
	count++;
	printf("the length of string  is %d",count);
}
