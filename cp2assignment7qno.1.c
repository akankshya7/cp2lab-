//write a program to calculate the lenght of a string using pointers
#include <stdio.h>
int string_length(const char* str)
{
	const char*ptr =str;
	while(*ptr !=  '\0')
	{
		ptr++;
	}
	return ptr= str;
}
int main()
{
	const char* my_string="silicon university";
	int length=string_length(my_string);
	printf("the string:%s \n",my_string);
	return 0;
}
