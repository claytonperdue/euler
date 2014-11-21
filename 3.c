//find the largest prime factor of the number 600851475143

#include <stdio.h>

int main(int argc, char *argv[])
{
  long long x = 600851475143, y = 2;
  int counter = 0,  factors[100];
  
  printf("The largest prime factor of the number %lld is ", x);
  
  while (y <= x)
  {
    if (!(x % y))
    {
      factors[counter] = y;
      counter++;
      x = x / y;
    }
    else y++;
  }
  printf("%d.\n", factors[counter - 1]);
  return 0;
}
