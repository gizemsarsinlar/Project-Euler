#include <stdio.h>

long long int gcd(long long int a, long long int b);
long long int lcm(long long int a, long long int b);

int main()
{
  long long int k = 1;
  long long int i;

  for (i = 1; i <= 20; i++) 
  {
    k = lcm(k, i);
  }
  printf("%lu\n", k);
  return 0;
}

long long int gcd(long long int a, long long int b)
{
  long long int r;

  if (a > b) 
  {
    long long int r = a;
                  a = b;
                  b = r;
  }

  while (r = a%b) 
  {
    a = b;
    b = r;
  }
  return b;
}

long long int lcm(long long int a, long long int b)
{
  long long int p = (long long int)a * b;
  return p/gcd(a, b);
}
	
	
