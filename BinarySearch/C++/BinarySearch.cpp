#include <iostream>

using namespace std;

void BinSearch(int arr[], int number, int N)
{
	int low = 0;                                       // границы рассматриваемого промежутка массива
  	int high = N;

  	while(low < high - 1) {                            // пока существует рассматриваемый промежуток
    	int mid = (low + high) / 2;                    // индекс среднего элемента рассматриваемого промежутка массива
    	
    	if(number < arr[mid])                          // сужаем границы рассматриваемого промежутка массива
		{
      		high = mid;
    	} 
		else 
		{
      		low = mid;
    	}
  	}
   	
  	if(arr[low] == number) {                           // если number найдена, то выводим индекс
    	cout << "arr[" << low << "] = " << number;
  	} 
  	else 
  	{
    	cout << number << " - not found";
  	}
}

int main() {
  	int N, number; 
	cin >> N;                                          // вводим число элементов массива

	int arr[N];

	for(int i = 0; i < N; i++) {                       // вводим массив
		cin >> arr[i];
	}

	cin >> number;                                     // число, которое необходимо найти в массиве

	BinSearch(arr, number, N);
}
