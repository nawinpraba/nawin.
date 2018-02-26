#include <stdio.h>

int main(void)
{
    long int a,b;
    
    printf("enter the num");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
    return 0;
