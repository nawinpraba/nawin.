#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers\t");
    scanf("%d%d",&a,&b);
    
    c=a-b;
    printf("%d\n",c);
    if(c%2==0)
    {
        printf("even");
    }
    else{
    printf("odd");
    }
    return 0;
}
