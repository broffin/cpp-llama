#include <iostream>
using namespace std;

void swap(int &x, int &y) {
  int tmp = x;
  x = y;
  y = tmp;
}

void flipPartArray(int a[], int start, int end) {
  while (start < end) {
    swap(a[start-1], a[end-1]);
    start++;
    end--;
  }
}

void shiftArray(int a[], int n, int k) {
  k %= n;
  flipPartArray(a, n+1-k, n);
  flipPartArray(a, 1, n-k);
  flipPartArray(a, 1, n);
}

int main() {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int n = 8;
  int k = 4;

  shiftArray(a, n, k);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
