#include <stdio.h>
#include <math.h>

int z(int a)
{
	return(a*(a+1)) / 2;
 } 

int main()
{

	int x, y;
	for(int i = 1; i <= 1000000000; i++)
	{
		x = 0;
		x = z(i);
		
		y = 0;
		
		for(int k = 1; k <= sqrt(x); k++)
		{
			if ( x % k == 0)
			{
				y++;
			}
		}
		
		if(y > 250)
		{
			break;
		}
		
	}
	
	printf("%d",x);
	
	return 0;
}
