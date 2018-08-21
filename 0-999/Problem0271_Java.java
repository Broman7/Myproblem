import java.util.Scanner;
import java.lang.Object;
import java.lang.Number;
import java.math.BigInteger;

public class JavaConsoleApp {    
             
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);     
        BigInteger a = input.nextBigInteger();
        System.out.println(factorial(a).toString());  
    }
    
    public static BigInteger factorial(BigInteger n) {
    BigInteger result = BigInteger.ONE;

    while (!n.equals(BigInteger.ZERO)) {
        result = result.multiply(n);
        n = n.subtract(BigInteger.ONE);
    }

         return result;
    }
    
}
