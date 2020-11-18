#include <stdio.h>

int nwd(int a, int b)
{
	while(a != b)
	{
		if(a < b)
			b = b - a;
		else
			a = a - b;
	}

	return a;
}

int main(void)
{
	int t, i, a, b;
	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d", &a, &b);
		if((a < 0 || a > 1000000) || (b < 0 || b > 1000000))
			return 0;

		if(a < b)
		{
			int c = a;
			a = b;
			b = c;
		}

		printf("%d\n", nwd(a,b));
	}

	return 0;
}