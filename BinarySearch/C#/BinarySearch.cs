using System;

namespace BinarySearch
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());                 // вводим число элементов массива
            int[] arr = new int[N];

            for (int i = 0; i < N; i++)                                  // вводим массив
            {
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }

            int number = Convert.ToInt32(Console.ReadLine());            // число, которое необходимо найти в массиве

            int low = 0;                                                 // границы рассматриваемого промежутка массива
            int high = N;

            while (low < high - 1)                                       // пока существует рассматриваемый промежуток
            {
                int mid = (low + high) / 2;                              // индекс среднего элемента рассматриваемого промежутка массива

                if (number < arr[mid])                                   // сужаем границы рассматриваемого промежутка массива
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }

            if (arr[low] == number)                                      // если number найдена, то выводим индекс
            {
                Console.WriteLine("arr[{0}]={1}", low, number);
            }
            else                                                         
            {
                Console.WriteLine("Not found :(");
            }
        }
    }
}
