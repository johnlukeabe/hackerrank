#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
	int i;
	long l;
	char c;
	float f;
	double d;

	cin >> i >> l >> c >> f >> d;
	cout << i << endl << l << endl << c << endl;
#if 0
	cout.precision(3);
	cout << fixed << f << endl;
	cout.precision(9);
	cout << fixed << d << endl;
#else
	cout << setprecision(3) << fixed << f << endl;
	cout << setprecision(9) << fixed << d << endl;
#endif

	return 0;
}
