#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],count=0;
	int i,n;
  printf("enter the characters);
	gets(str);
	n=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
