#include <stdio.h>
#include<conio.h>

int main(void) {
	long int a,b,temp;
	printf("enter the numbers");
scanf("%ld %ld",&a,&b);
temp=a;
a=b;
b=temp;
printf("%ld %ld",a,b);
	return 0;
}
