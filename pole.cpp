#include <iostream>

using namespace std;

int main() {
  const int N = 5;
  bool A[N + 1];
  int B[N / 2 + 1] = {0};
  int n = 0;

  fill_n(A, N + 1, true); // more convenient initialisation

  for (int i = 2; i <= N; i++) {
    if (A[i]) {
      //cout << i << " "; // do not print out now

      B[n] = i; n++; // save primes without zeros between them

      for (int j = 2 * i; j <= N; j += i) {
        A[j] = false;
      }
    }
  }

  for (int i = 0; i < n; i++) { // print out without the trailing zeros
    cout << B[i] << " ";
  }

  cout << endl;
}
