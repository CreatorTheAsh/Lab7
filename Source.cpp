#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int Dif(int a, int b){
	int c = abs(a - b) ;
	return c;
}
int Bigger(int a, int b) {
	int c;
	if (a > b) { c = a; }
	else { c = b; }
	return c;
}

int main() {
	int n, k, l, max;
	int MAX = 0;
	cout << "n: "; cin >> n;
	int *B = new int [n];
	for (int p = 0; p < n;p++) {
		B[p] = rand();
	}
		for (int i = 3; i <= n; i++) {
		k = Dif(B[i], B[i + 1]);
		l = Dif(B[i+1], B[i + 2]);
		max = Bigger(k, l);
		if (MAX < max) { MAX = max; }
	}
		cout << "MAX: " << MAX << "\n";
		system("pause");
		return 0;
}