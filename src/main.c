#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#include <stdio.h>
#include "function.h"
int main()
{
  int a,b,c,d;
  printf("Plz input a,b,c,d (int):\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  swap(&c,&d);
  printf("The sum of a and b is: %d\nAfter swapping c and d is:%d %d\n",add(a,b),c,d);
  return EXIT_SUCCESS;
}
