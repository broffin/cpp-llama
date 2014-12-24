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
  int k, nsn;
  int kola = 1;
  cout << "Počet bežcov: ";
  cin >> k >> nsn;

  for(int i = 0; i < k-1; i++) {
    int n2, tmp;
    tmp = nsn;
    cin >> n2;
    nsn = lcm(nsn, n2);

    kola = (nsn/tmp) * kola + nsn/n2;
  }

  cout << "LCM pre k bežcov je " << nsn << "." << endl;
  cout << "Počet prebehnutých kôl je " << kola << "." << endl;
}
