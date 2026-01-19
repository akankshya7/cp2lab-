//write a program to print your name and sic no.
#include <stdio.h>
void main()
{
	char name [25];
	char sicno[10];
	printf("enter your name");
	gets(name);
	printf("enter your sicno");
	scanf("%s",sicno);
	printf("name=%s\n sicno=%s",name,sicno);
}
