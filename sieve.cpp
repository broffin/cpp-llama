// Print numbers < N not divisible by any j^2 where j > 1.

#include <iostream>
using namespace std;

int main() {
  const int N = 50;
  bool* A = new bool[N + 1];

  fill_n(A, N + 1, true);
  cout << 1 << " ";
  
  for (long i = 2; i <= N; i++) {
    if (A[i]) {
      cout << i << " ";
      for (long j = i*i; j <= N; j += i*i) {
        A[j] = false;
      }
    }
  }
  //cin.ignore();
  cout << endl;
  delete [] A;
}
