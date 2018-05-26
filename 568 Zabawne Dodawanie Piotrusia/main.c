#include <stdio.h>

int main(void)
{
    int t, i, n;

    scanf("%d", &t);
    if(t > 80)
        return 0;

    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        if(n < 1 || n > 80)
            return 0;

        int jednosci = 0;
        int dziesiatki = 0;
        int setki = 0;
        int tysiace = 0;
        int d_tysiecy = 0;
        int counter = 0;
        int m=0;

        jednosci = (n%10);
        dziesiatki = n/10;

        if((dziesiatki == 0) || (n%11==0))
        {
            printf("%d %d\n", n, counter);
            continue;
        }

        while(1)
        {
            if(n >= 10 && n < 100)
            {
                jednosci = (n%10);
                dziesiatki = n/10;
                if(jednosci == dziesiatki) break;
                m = (jednosci*10) + dziesiatki;
            }
            else if(n>=100 && n < 1000)
            {
                jednosci = (n%10);
                dziesiatki = (n%100)/10;
                setki = n/100;
                if(jednosci == setki) break;
                m = (jednosci*100) + (dziesiatki*10) + setki;
            }
            else if(n>=1000 && n < 10000)
            {
                jednosci = (n%10);
                dziesiatki = (n%100)/10;
                setki = (n%1000)/100;
                tysiace = n/1000;
                if((jednosci == tysiace) && (dziesiatki == setki)) break;
                m = (jednosci*1000) + (dziesiatki*100) + (setki*10) + tysiace;
            }

            else if(n>=10000)
            {
                jednosci = (n%10);
                dziesiatki = (n%100)/10;
                setki = (n%1000)/100;
                tysiace = (n%10000)/1000;
                d_tysiecy = n/10000;
                if((jednosci == d_tysiecy) && (dziesiatki == tysiace)) break;
                m = (jednosci*10000) + (dziesiatki*1000) + (setki*100) + (tysiace*10) + d_tysiecy;
            }
            n+=m;
            counter++;
        }

        printf("%d %d\n", n, counter);

    }

    return 0;
}