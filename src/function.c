#include "function.h"

void swap(int *a,int *b)
{
  (*a)^=(*b),(*b)^=(*a),(*a)^=(*b);
}

int add(const int a,const int b)
{
  return a+b;
}
