#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int lcm(int a, int b) {
  return (a*b) / gcd(a, b);
}

int main() {
  int k, n1;
  cout << "Počet bežcov: ";
  cin >> k >> n1;

  for(int i = 0; i < k-1; i++) {
    int n2;
    cin >> n2;
    n1 = lcm(n1, n2);
  }

  cout << "LCM pre k bežcov je " << n1 << "." << endl;
}
