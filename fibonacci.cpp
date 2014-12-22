#include <iostream>

using namespace std;

int fibonacci(int n) {

    int f = 1;     // Cislo F(i)
    int oldF = 0; // Cislo F(i-1)

    if(n == 0) return 0;

    for(int i = 2; i <= n; i++) {
        int newF = f + oldF;  // spocitaj nove F(i) pre vyssie i
        oldF = f;             // poposuvaj hodnoty
        f = newF;
    }

    return f;
}

// volaním funkcie fibonacci pre rôzne hodnoty n
void printFib1(int n) {
  cout << "1. Prvých n Fibonacciho čísel:";

  for(int i = 0; i < n; i++) {
    cout << " " << fibonacci(i);
  }
}

/* prepísaním tejto funkcie, aby sa hodnoty vypisovali priamo ako sa počítajú */

void printFib2(int n) {
  int f = 1;     // Cislo F(i)
  int oldF = 0; // Cislo F(i-1)

  cout << "2. Prvých n Fibonacciho čísel:";
  if(n > 0) cout << " " << oldF;
  if(n > 1) cout << " " << f;

  for(int i = 2; i <= n-1; i++) {
    int newF = f + oldF;  // spocitaj nove F(i) pre vyssie i
    oldF = f;             // poposuvaj hodnoty
    f = newF;
    cout << " " << f;
  }
}

int main() {
  int n = 10;
  printFib1(n);
  cout << endl;
  printFib2(n);
}
