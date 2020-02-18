import java.util.Scanner;
import static java.lang.Math.pow;
public class Main
{
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = 0;
        double l = 0,r = 0, rp = 0 , p , b;
        r = cin.nextInt();
        p = cin.nextInt();
        b = cin.nextInt();
        p = 1 + p/100;
        while(r>0)
        {
            rp = r;
            r = r * pow(p,7);
            if( b > r)
            {
                n++;
                l = r;
                break;
            }
            r -= b;
            n++;
            if(rp < r)
            {
                n=-1;
                break;
            }
        }
        if(n==-1) System.out.println(n);
        else System.out.format( "%d %.2f" , n , l);
    }
}