#include <iostream>
using namespace std;

int main(void) {
  int n;

  cout << "Please enter n: ";
  cin >> n;

  cout << n << "! = " << "1";

  int result = 1;
  for (int i = 1; i <= n; i++) {
    if (i > 1) cout << "*" << i;
    result = result * i;
  }
  cout << " = " << result << endl;
}
