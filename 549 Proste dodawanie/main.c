#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t, n, i, j, sum=0;
	int *array;

	scanf("%d", &t);
	if(t < 0 || t >= 100)
		return 0;

	for(i=0; i<t; i++)
	{
		scanf("%d", &n);
		array = malloc(sizeof(int) * n);
		for(j=0; j<n; j++)
		{
			scanf("%d", &array[j]);
			sum+=array[j];
		}
		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}