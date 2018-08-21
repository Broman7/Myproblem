using System;
using System.Numerics;

namespace Problem271
{
    internal class Program
    {

        public static void Main(string[] args)
        {
            BigInteger a = BigInteger.Parse(Console.ReadLine());
            Console.WriteLine(factorial(a));
        }

        private static BigInteger factorial(BigInteger n)
        {
            BigInteger res = 1;
             while (n != 0) {
                res *= n;
                n -= 1;
             }
             return res;    
        }        
    }
}
