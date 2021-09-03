#include <iostream>

using namespace std;

void BinSearch(int arr[], int number, int N)
{
	int low = 0;
  	int high = N;

  	while(low < high - 1) {
    	int mid = (low + high) / 2;
    	
    	if(number < arr[mid]) 
		{
      		high = mid;
    	} 
		else 
		{
      		low = mid;
    	}
  	}
   	
  	if(arr[low] == number) {
    	cout << "arr[" << low << "] = " << number;
  	} 
  	else 
  	{
    	cout << number << " - not found";
  	}
}

int main() {
  	int N, number; 
	cin >> N;

	int arr[N];

	for(int i = 0; i < N; i++) {  
		cin >> arr[i];
	}

	cin >> number;

	BinSearch(arr, number, N);
}
