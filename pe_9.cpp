#include <stdio.h>

int main()
{
	int x, y;

	for(x = 1; x <= 333; x++)
	{
		for(y = x; y <= 666; y++)
		{
			int z = (1000 - x - y);
			if (x*x + y*y == z*z)
			{
				printf("%d\n", x * y * z);
			}
		}
	}
return 0;	
}
