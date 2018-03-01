#include <stdio.h>

int main ()
{

long long int k = 0, m = 0, i;

for(i = 1; i <= 100; i++)
{
	k += i*i;
	m += i;
}
printf("%d\n", m*m - k);

return 0;
}

