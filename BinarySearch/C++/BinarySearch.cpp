#include <iostream>

using namespace std;

void BinSearch(int arr[], int number, int N)
{
	int low = 0;                                       // ãðàíèöû ðàññìàòðèâàåìîãî ïðîìåæóòêà ìàññèâà 
  	int high = N;

  	while(low < high - 1) {                            // ïîêà ñóùåñòâóåò ðàññìàòðèâàåìûé ïðîìåæóòîê
    	int mid = (low + high) / 2;                    // èíäåêñ ñðåäíåãî ýëåìåíòà ðàññìàòðèâàåìîãî ïðîìåæóòêà ìàññèâà
    	
    	if(number < arr[mid])                          // ñóæàåì ãðàíèöû ðàññìàòðèâàåìîãî ïðîìåæóòêà ìàññèâà
		{
      		high = mid;
    	} 
		else 
		{
      		low = mid;
    	}
  	}
   	
  	if(arr[low] == number) {                           // åñëè number íàéäåíà, òî âûâîäèì èíäåêñ
    	cout << "arr[" << low << "] = " << number;
  	} 
  	else 
  	{
    	cout << number << " - not found";
  	}
}

int main() {
  	int N, number; 
	cin >> N;                                          // ââîäèì ÷èñëî ýëåìåíòîâ ìàññèâà

	int arr[N];

	for(int i = 0; i < N; i++) {                       // ââîäèì ìàññèâ
		cin >> arr[i];
	}

	cin >> number;                                     // ÷èñëî, êîòîðîå íåîáõîäèìî íàéòè â ìàññèâå

	BinSearch(arr, number, N);
}
