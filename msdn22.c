
#include <stdio.h>

int main(void)
{
    long int a,b,temp;
    
    printf("enter the num");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;

  
}
