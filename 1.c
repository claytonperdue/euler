#include <stdio.h>

int main(int argc, char *argv[])
{
  int counter;
  int sum_of_multiples = 0;
  for (counter = 0; counter < 1000; counter++)
  {
    if (!(counter % 3) || !(counter % 5)) sum_of_multiples += counter;
  }
  printf("%d is the sum of all multiples of 3 and 5 below 1000.\n", sum_of_multiples);
  return 0;
}