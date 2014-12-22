#include <iostream>

using namespace std;

int zahada(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { return i; }
    }
    return n;
}

int main() {
  cout << zahada(103429);
}
