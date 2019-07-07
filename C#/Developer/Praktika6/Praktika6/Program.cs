using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Praktika6
{
    class Program
    {
        static bool IsTreug(double a, double b, double c)
        {
            return a + b > c && a + c > b && c + b > a;
        }
        static double S(double a, double b, double c)
        {
            double p = (a + b + c) / 2;
            return Math.Sqrt(p * (p - a) * (p - b) * (p - c));
        }
        static void Main(string[] args)
        {
            Console.Write("Введите а: ");
            double a = double.Parse(Console.ReadLine());
            Console.Write("Введите b: ");
            double b = double.Parse(Console.ReadLine());
            Console.Write("Введите с: ");
            double c = double.Parse(Console.ReadLine());
            Console.WriteLine("Может существовать треугольник с такими сторонами: " + IsTreug(a, b, c));
            Console.WriteLine("Площадь треугольника: " + S(a, b, c));
            Console.ReadKey();
        }
    }
}
