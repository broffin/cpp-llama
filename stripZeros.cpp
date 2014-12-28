#include <iostream>
#include <queue>
using namespace std;

void swap(int &x, int &y) {
  int tmp = x;
  x = y;
  y = tmp;
}

void stripZeros(int a[], int &n) {
  int numel = 0;
  queue<int> zeros;

  for (int i = 0; i < n; ++i) {
    if (a[i] != 0) numel++;

    if (a[i] == 0) {
      zeros.push(i);
    }

    if (a[i] != 0 && !zeros.empty()) {
      swap(a[zeros.front()], a[i]);
      zeros.pop();
      zeros.push(i);
    }
  }
  n = numel;
}

int main() {
  int a[] = {1,0,2,0,0,3,0,0,6,0};
  int n = 10;

  stripZeros(a, n);

  for (int i = 0; i < n; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
}
