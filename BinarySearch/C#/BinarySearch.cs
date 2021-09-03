using System;

namespace BinarySearch
{
    class Program
    {
        public void BinSearch(int[] arr, int N, int number)
        {
            int low = 0;
            int high = N;

            while (low < high - 1) {
                int mid = (low + high) / 2;

                if (number < arr[mid])
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }

            if(arr[low] == number)
            {
                Console.WriteLine("arr[{0}]={1}", low, number);
            }
            else
            {
                Console.WriteLine("Not found :(");
            }
        }

        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[N];

            for (int i = 0; i < N; i++)
            {
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }

            int number = Convert.ToInt32(Console.ReadLine());

            int low = 0;
            int high = N;

            while (low < high - 1)
            {
                int mid = (low + high) / 2;

                if (number < arr[mid])
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }

            if (arr[low] == number)
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
