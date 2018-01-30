using System;
class MainClass
{
	public static void Main ()
	{
		int n, a;
		n = int.Parse (Console.ReadLine());
		a = n % 10;
		n /= 10;
		Console.WriteLine ( "{0} {1}",n,a );
    }

}