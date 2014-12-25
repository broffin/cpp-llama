#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  double suma = 0;
  int rok = 0;

  cout << "Zakladám účet..." << endl;
  cout << "Rok" << "\t" << "Suma" << endl;

  while (suma < 20000) {
    suma = (suma + 1000) * 1.05;
    rok++;
    fprintf(stdout, "%i \t %.2f\n", rok, suma);
    //cout << rok << "\t" << suma << endl;
  }

  cout << "Trvalo to len " << rok << " rokov!" << endl;
}
