#include <stdio.h>
#include<conio.h>
int main() 
{
    int n,i,count=0;
    printf("enter the number")
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("yes...prime");
    }
    else
    {
        printf("no");
    }
    return 0;
}
  
