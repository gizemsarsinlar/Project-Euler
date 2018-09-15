#include <stdio.h>
int main ()
{
	int x, i;
	printf("Bir sayi giriniz: ");
	scanf("%d",&x);
		
	for(i=x-1; x != 1; i--)
	{
		if(x % i == 0)
		{
			x /= i;
			printf("%d\n",i);
			i=x-1;
		}
		
	}
	return 0;
}
