// find the 10001st prime number

#include <stdio.h>

int main(int argc, char *argv[])
{
  int counter = 1;
  int prime = 2;
  
  while(counter < 10001)
  {
    prime++;
    if (is_prime(prime)) counter++;
  }
  
  printf("%d is the 10001st prime number.\n", prime);
}

int is_prime(int num)
{
  int counter = 1;
  int test_num = 2;
  
  while (test_num <= num)
  {
    if (!(num % test_num))
    {
      counter++;
      num = num / test_num;
    }
    else test_num++;
  }
  if(counter > 2) return 0;
  else return 1;
}