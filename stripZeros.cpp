#include <iostream>
using namespace std;

void swap(int &x, int &y) {
  int tmp = x;
  x = y;
  y = tmp;
}

void stripZeros(int a[], int &n) {
  int zero;
  bool hit = false;
  int numel = 0;

  for (int i = 0; i < n; ++i) {
    if (a[i] != 0) numel++;

    if ((a[i] == 0) && (hit == false)) {
      zero = i;
      hit = true;
    }

    if ((a[i] != 0) && (hit == true)) { 
      swap(a[zero], a[i]);
      i = zero;
      hit = false;
    }
  }
  n = numel;
}

int main() {
  int a[] = {1,0,2,0,0,3};
  int n = 6;

  stripZeros(a, n);

  for (int i = 0; i < n; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
}
