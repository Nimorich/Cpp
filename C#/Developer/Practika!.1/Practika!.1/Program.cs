using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practika_1
{
    class Program
    {
        static void Main(string[] args)
        {
            double x;
            double y;
            Console.Write("Введите первое число: ");
            x = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введите второе число: ");
            y = Convert.ToDouble(Console.ReadLine());
            double z = x + y;
            Console.WriteLine(x + "+" + y + "=" + z); //Преобразование в строку
            Console.ReadKey();
        }
    }
}
