using System;

namespace BinarySearch
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());                 // ââîäèì ÷èñëî ýëåìåíòîâ ìàññèâà
            int[] arr = new int[N];

            for (int i = 0; i < N; i++)                                  // ââîäèì ìàññèâ
            {
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }

            int number = Convert.ToInt32(Console.ReadLine());            // ÷èñëî, êîòîðîå íåîáõîäèìî íàéòè â ìàññèâå

            int low = 0;                                                 // ãðàíèöû ðàññìàòðèâàåìîãî ïðîìåæóòêà ìàññèâà
            int high = N;

            while (low < high - 1)                                       // ïîêà ñóùåñòâóåò ðàññìàòðèâàåìûé ïðîìåæóòîê
            {
                int mid = (low + high) / 2;                              // èíäåêñ ñðåäíåãî ýëåìåíòà ðàññìàòðèâàåìîãî ïðîìåæóòêà ìàññèâà

                if (number < arr[mid])                                   // ñóæàåì ãðàíèöû ðàññìàòðèâàåìîãî ïðîìåæóòêà ìàññèâà
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }

            if (arr[low] == number)                                      // åñëè number íàéäåíà, òî âûâîäèì èíäåêñ 
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
