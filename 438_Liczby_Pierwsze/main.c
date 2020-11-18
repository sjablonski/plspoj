#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int n, i, j;
	int *tab;
	scanf("%d", &n);
	if(n > 100000)
		return 0;

	tab = malloc(sizeof(int) * n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &tab[i]);
		if(tab[i] < 1 || tab[i] > 10000)
			return 0;

		for(j=2; j<=sqrt(tab[i]); j++)
		{
			if((tab[i]%j) == 0)
			{
				tab[i] = 0;
				break;
			}
		}

	}

	for(i=0; i<n; i++)
	{
		if(tab[i] == 0 || tab[i] == 1)
			puts("NIE");
		else
			puts("TAK");
	}

	free(tab);

	return 0;
}