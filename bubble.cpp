#include <iostream>

using namespace std;

void swap(int &x, int &y) {
  int tmp = x;
  x = y;
  y = tmp;
}

void sort(int a[], int n) {
  while (true) {
    bool vymenil = false;
    for (int i = 0; i < n; i++) {
      if (a[i] < a[i - 1]) {
        swap(a[i - 1], a[i]);
        vymenil = true;
      }
    }

    if (!vymenil) break;
  }
}

int main() {
  const int l = 8;
  int a[l] = {6, 3, 7, 9, 2, 4, 1, 5};

  sort(a, l);

  for (int i = 0; i < l; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
}
