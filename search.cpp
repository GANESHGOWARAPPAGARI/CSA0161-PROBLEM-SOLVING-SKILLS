#include <stdio.h>
int main()
{
  int array[10], x, i, n;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("Enter a number to search\n");
  scanf("%d", &x);
  for (i = 0; i < n; i++)
  {
    if (array[i] == x)    
    {
      printf("%d is present at index %d.\n", x, i);
      break;
    }
  }
  if (i == n)
  {
    printf("%d isn't present in the array.\n", x);
  }
  return 0;
}