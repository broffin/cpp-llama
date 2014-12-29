#include <iostream>
using namespace std;

int main(void) {
  const int N = 250000;
  bool* A = new bool[N + 1];

  fill_n(A, N + 1, true);

  cout << 1 << " ";

  for (int i = 2; i <= N; i++) {
    if (A[i]) {
      cout << i << " ";
      for (int j = i*i; j <= N; j += i*i) {
        A[j] = false;
      }
    }
  }
  //cin.ignore();
  cout << endl;
  delete [] A;
}
