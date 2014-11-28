// Find the smallest positive number evenly divisble by all numbers from 1 to 20.

#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;
  int j = 19;
  int smallest = 0;
  
  while(smallest == 0)
  {
    j++;
    smallest = j;
    for(i = 1; i <= 20; i++)
    {
      if(j % i) smallest = 0;
    }
  }
  
  printf("The smallest positive number evenly divisible by all numbers from 1 to 20 is %d.\n", smallest);
}