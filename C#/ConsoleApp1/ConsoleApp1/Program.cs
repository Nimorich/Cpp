using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 10;
            int b = 20;

            if (a < 15)
            {
                a = 1;
                if (b > 15)
                {
                    a = 2;
                    if (a != 10)
                    {
                        b = 10;
                    }
                    b = 5;
                }
            }
            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.Read();


        }
    }
}
