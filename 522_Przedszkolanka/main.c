#include <stdio.h>

int NWD(int a, int b)
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

int main()
{
	int n, a, b, i;
	scanf("%d", &n);
	if(n < 1 || n > 20)
		return 0;

	for(i=0; i<n; i++)
	{
		scanf("%d %d", &a, &b);
		if((a < 10 || a > 30) || (b < 10 || b > 30))
			return 0;

		if(a < b)
		{
			int c;
			c = a;
			a = b;
			b = c;
		}
		printf("%d\n", ((a*b)/NWD(a,b)));
	}

	return 0;
}