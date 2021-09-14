#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int arr[N][N];

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if (j == i)                                         // Main diagonal (??????? ?????????) 0
        arr[i][j] = 0;
      else if(j + i == N - 1)                             // SideDiagonal (???????? ?????????) 1
        arr[i][j] = 1;
      else if((j + i) > (N - 1) && (i < j) && i < i + j)  // RightTriangle (?????? ???????????)2
        arr[i][j] = 2;
      else if((j+i) < (N-1) && (i < j))                   // UpperTriangle (??????? ???????????)3
        arr[i][j] = 3;
      else if((j+i) > (N-1) && (i > j) && i < i+j)        // LowerTriangle (?????? ???????????)4
        arr[i][j] = 4;
      else if((j+i) < (N-1) && (i > j))                   // LeftTriangle (????? ???????????)5
        arr[i][j] = 5;
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
