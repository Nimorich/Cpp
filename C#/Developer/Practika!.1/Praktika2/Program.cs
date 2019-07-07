using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Praktika2
{
    class Program
    {
        static void Print(string msg, int x, int y)
        {
            //Установим позицию курсора на экране
            Console.SetCursorPosition(x, y);
            Console;else.Write(msg);
        }
        static void Print(string msg, ConsoleColor foregroundcolor)
        {
            //Установим цвет символов
            Console.ForegroundColor = foregroundcolor;
            Console.Write(msg);
        }
        //Создайте перегрузку функции, в которой будет указана позиция и цвет

        static void Main()
        {
            Print("Привет!\n", 10, 10);
            Print("Привет еще раз!", ConsoleColor.Red);
        }
    }
}
