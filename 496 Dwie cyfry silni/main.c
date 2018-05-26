#include <stdio.h>

int main(void)
{
	unsigned int n, i, j, silnia, w=1, dzi, jed;
	scanf("%u", &n);
	if(n < 1 || n > 30)
		return 0;

	for(i=0; i<n; i++)
	{
		scanf("%u", &silnia);
		if(silnia < 0 || silnia > 1000000000)
			return 0;
		else
		{
			if(silnia > 10)
				w=0;
			else
			{
				for(j=2; j<=silnia; j++)
					w*=j;
			}
			dzi = (w%100-(w%10))/10; 
			jed = w%10;

			printf("%d %d\n", dzi, jed);
			w=1;
		}
	}

	return 0;
}