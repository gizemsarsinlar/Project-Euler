#include <stdio.h>

int main()
{
	int carpim;
	int aracarpim;
	int toplam;
	int ters = 1;
	int yedek;
	int max = 0;
	
	for(int i = 100; i <=999; i++)
{
		carpim = 1;
		
	for(int j = 100; j <= 999; j++)
    {
    	carpim = j * i;
    	yedek = carpim;
    	ters = 0;
    	aracarpim = 1;
    	
    	if(carpim % 10 == 0)
    	{
    		continue;
		}
		for (int k = 0; k < 6; k++)
        {
	 
	    aracarpim = carpim - ((carpim / 10) * 10);
	    carpim = (carpim / 10);
	    ters = (ters * 10) + aracarpim;
	    
	    if(yedek==ters)
	    {
	    	if (ters > max)
	    	{
	    		max = ters;
			}
		}
	}
	}
}
printf("the largest palindrome made from the product of the 3-digit number == %d",max);
return 0;
}
