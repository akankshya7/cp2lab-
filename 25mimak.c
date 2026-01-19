//write a program to fid out no. of words in a sentence
#include<stdio.h>
void main()
{
	char s[20];
	int i,count=0;
	printf("enter a sentence");
	gets(s);
	for(i=0;s[i]!=0;i++)
	if(s[i]==32)
	count++;
	printf("number of words in a sentence is %d",count+1);
}
