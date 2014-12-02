// find the difference between the square of the sum of the first 100 natural numbers and the sum of the squares of the first 100 natural numbers

#include <stdio.h>

int main(int argc, char *argv[])
{
  int sum_of_naturals = 0;
  int sum_of_squares = 0;
  int difference;
  int i;
  
  for(i = 0; i <= 100; i++)
  {
    sum_of_naturals += i;
    sum_of_squares += (i * i);
  }
  
  difference = (sum_of_naturals * sum_of_naturals) - sum_of_squares;

  printf("The answer is %d.\n", difference);
}