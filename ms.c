#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],count=0;
	int i;
	printf("enter the character");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
 
