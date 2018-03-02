#include <stdio.h>
#include<conio.h>

int main(void) 
{
	char str[200];
	int n,i;
	printf("enter the string and the k value:");
	scanf("%s %d",str,&n);
	for(i=0;i<n;i++)
	{
		printf("\n %c",str[i]);
	}
	return 0;
}
