 #include<stdio.h>        
int main()
{
    int n,i,a=1,b=1,c;
    printf("enter the range");
    scanf("%d",&n);
    printf("%d  %d  ",a,b);
    for(i=1;i<n-2;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
    return 0;
}
