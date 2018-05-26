import java.util.Scanner;

public class Main
{
    public static void main(String args [])
    {
        Scanner in = new Scanner(System.in);
        
        int t;
        t = in.nextInt();
        if(t > 100)
        {
            in.close();
            return;
        }
        int tab[][] = new int[t][];

        int n;
        for(int i=0; i<t; i++)
        {
            n = in.nextInt();
            if(n > 100)
            {
                in.close();
                return;
            }
            tab[i] = new int[n];
            for(int j=0; j<n; j++)
            {
                tab[i][j] = in.nextInt();
            }
        }
        in.close();

        for(int i=0; i<tab.length; i++)
        {
            for(int j=tab[i].length-1; j>=0; j--)
            {
                System.out.printf("%d ", tab[i][j]);
            }
            System.out.println();
        }
    }
}