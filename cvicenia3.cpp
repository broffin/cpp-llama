#include <iostream>

using namespace std;

void vypis1(int input) {
	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= input; j++) {
			cout << i << " ";
		}
		cout << endl;
	}	
}

void vypis2(int input) {
	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= input; j++) {
			cout << j << " ";
		}
		cout << endl;
	}	
}

void vypis3(int input) {
	for (int i = 1; i <= input; i++) {
		for (int j = 0+i; j <= input+i-1; j++) {
			cout << j << " ";
		}
		cout << endl;
	}	
}

int cifernySucet(int cislo) {
	int csucet = 0;

	while (cislo > 0) {
		csucet += cislo % 10;
		cislo /= 10;
	}
	return csucet;
}

int pocetCifier(int cislo) {
	int cpocet = 0;

	do {
		cislo /= 10;
		cpocet++;
	} while (cislo > 0);
	return cpocet;
}

void zarovnaj(int a, int b) {
	int da = pocetCifier(a);
	int db = pocetCifier(b);
	
	if (da < db) {
		cout << string(db - da, ' ') << a << endl;
		cout << b << endl;
	}
	else if (da > db) {
		cout << a << endl;
		cout << string(da - db, ' ') << b << endl;
	}
	else {
		cout << a << endl;
		cout << b << endl;
	}
}

long faktorial(int a) {
	long fa = 1;
	while (a != 0) {
		fa *= a;
		a--;
	}
	return fa;
}

int kombinacneCislo(int n, int k) {
	double res = 1.0;

  for (int i = 1; i < k+1; i++) {
    res *= (n + 1.0 - i) / i;
  }
  return res;
}

void vypisKC(int n) {
  for (int i = 0; i <= n; ++i) {
    cout << kombinacneCislo(n, i) << " ";
  }
  cout << endl;
}

int main() {
  vypisKC(10);
}
