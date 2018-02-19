#include <stdio.h>
#include<conio.h>
 
void main()
{
  int a[100], index, size, c;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
    scanf("%d", &a[c]);
 
 
  printf("array elements are:");
 for (c = 0; c < size; c++)
 printf("index %d value %d",c,a[c]);
}
