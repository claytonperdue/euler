#include <stdio.h>

int main(int argc, char *argv[])
{
  int current = 1;
  int next = 1;
  int previous = 0;
  int sum_of_even = 0;
  while (current < 4000000)
  {
    if (!(current % 2)) sum_of_even += current;
    next = current + previous;
    previous = current;
    current = next;
  }
  printf("The sum of all even fibonacci numbers below 4,000,000 is %d.\n", sum_of_even);
  return 0;
}