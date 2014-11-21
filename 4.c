//find the largest product of two three-digit numbers that is also palindromic (reads the same backwards and forwards)
//done without string.h as a refresher

#include <stdio.h>

int main(int argc, char *argv[])
{
  int i, j;
  int largest;
  for(i = 100; i <= 999; i++)
  {
    for(j = 100; j <= 999; j++)
    {
      if(palindrome_test(i * j))
      {
	if((i * j) > largest) largest = i * j;
      }
    }
  }
  printf("The largest palindromic product of two three-digit numbers is %d.\n", largest);
  return 0;
}

int palindrome_test(int k)
{
  int l = 0;
  int o = 0;
  char m[100];
  char n[100];
  int is_palindrome = 1;
  sprintf(m, "%d", k);

  // find the end of the string
  while(m[l] != '\0')
  {
    l++;
    o++;
  }

  // signify the end of the string to copy to
  n[l + 1] = '\0';
  
  // copy string m to string n, backwards
  while(l >= 0)
  {
    n[o - l] = m[l - 1];
    l--;
  }

  for(l = 0; l < o; l++)
  {
    if(m[l] != n[l]) is_palindrome = 0;
  }
  
  return is_palindrome;
}
