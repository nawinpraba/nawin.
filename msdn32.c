#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("enter the numbers of a and b");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d\n",c);
    if(c%2==0)
    {
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
    return 0;
    }
    
