#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, i,j, count=0;
	char wyraz[200]={};
	char znak;

	scanf("%d", &n);
	if(n < 1 || n >50)
		return 0;
	
	for(i=0; i<n; i++)
	{
		scanf("%s", wyraz);
		znak = wyraz[0];
		for(j=0; j<strlen(wyraz); j++)
		{
			if(znak == wyraz[j])
			{
				count++;
			}
			if(znak != wyraz[j])
			{
				if(count == 1) {putchar(znak);}
				else if(count == 2) {putchar(znak); putchar(znak);}
				if(count > 2) {putchar(znak); printf("%d", count);}
				znak = wyraz[j];
				count = 1;
			}
			if(j == (strlen(wyraz)-1))
			{
				if(count == 1) {putchar(znak);}
				else if(count == 2) {putchar(znak); putchar(znak);}
				if(count > 2) {putchar(znak); printf("%d", count);}
			}
		}
		puts("");
		count = 0;
	}

	return 0;
}