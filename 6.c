// find the difference between the square of the sum of the first 100 natural numbers and the sum of the squares of the first 100 natural numbers

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  double sum_of_naturals;
  double sum_of_squares;
  double difference;
  double i;
  double j = 2;
  
  for(i = 0; i <= 100; i++)
  {
    sum_of_naturals += i;
    sum_of_squares += pow(i, j);
  }
  
  difference = pow(sum_of_naturals, j) - sum_of_squares;

  printf("The answer is %d.\n", (int) difference);
}