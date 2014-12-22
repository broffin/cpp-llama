#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Please enter some number: ";
    cin >> n;

    cout << "Divisors of " << n << ":";

    for(int i=1; i*i<=n; i++) {
        if (n % i == 0) {
            int j = n / i;
            cout << " " << i;
            if (i == j) continue;
            cout << " " << j;
        }
    }
    cout << endl;
}
