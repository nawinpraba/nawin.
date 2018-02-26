#include <stdio.h>
#include<conio.h>
 
int main(void) 
{
	int num,odd;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%1==0)
	{
		odd=num-1;	
	}
	else
	{
		odd=num-2;
	}
	printf("\n%d",odd);
	return 0;
}
