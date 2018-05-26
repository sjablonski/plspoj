#include <stdio.h>

int main(void)
{
	unsigned int a, b, n, i;
	unsigned int w=1;

	scanf("%u", &n);
	if(n < 0 || n > 10)
		return 0;

	for(i=0; i<n; i++)
	{
		scanf("%u %u", &a, &b);
		if((a < 1 || a > 1000000000) || (b < 1 || b > 1000000000))
			return 0;

		if(a == 1) w = 1;
		else if((a%10 == 2) && (b%4 == 1)) w = 2;
		else if((a%10 == 2) && (b%4 == 2)) w = 4;
		else if((a%10 == 2) && (b%4 == 3)) w = 8;
		else if((a%10 == 2) && (b%4 == 0)) w = 6;

		else if((a%10 == 3) && (b%4 == 1)) w = 3;
		else if((a%10 == 3) && (b%4 == 2)) w = 9;
		else if((a%10 == 3) && (b%4 == 3)) w = 7;
		else if((a%10 == 3) && (b%4 == 0)) w = 1;

		else if((a%10 == 4) && (b%2 == 1)) w = 4;
		else if((a%10 == 4) && (b%2 == 0)) w = 6;

		else if(a%10 == 5) w = 5;
		else if(a%10 == 6) w = 6;

		else if((a%10 == 7) && (b%4 == 1)) w = 7;
		else if((a%10 == 7) && (b%4 == 2)) w = 9;
		else if((a%10 == 7) && (b%4 == 3)) w = 3;
		else if((a%10 == 7) && (b%4 == 0)) w = 1;

		else if((a%10 == 8) && (b%4 == 1)) w = 8;
		else if((a%10 == 8) && (b%4 == 2)) w = 4;
		else if((a%10 == 8) && (b%4 == 3)) w = 2;
		else if((a%10 == 8) && (b%4 == 0)) w = 6;

		else if((a%10 == 9) && (b%2 == 1)) w = 9;
		else if((a%10 == 9) && (b%2 == 0)) w = 1;

		else if(a%10 == 0) w = 0;

		printf("%u\n", w);

		w = 1;
	}


	return 0;
}