using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dz1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Добрый день. Как вас зовут?");
            string name = Console.ReadLine();
            string welcome = "Привет, ";
            welcome += name == "Анастасия" ? "моя ненаглядная! Как дела?" : "гамно. Чё те надо!?";
            Console.WriteLine(welcome);
            Console.ReadLine();
            Console.WriteLine("Рад, что ты в порядке :) Удачного дня!");
            Console.ReadKey();




        }
    }
}
