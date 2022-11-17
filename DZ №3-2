#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
double F(double a, double b, double r) {
	double G = 6.67 * (1e-11);
	return G * (a * b) / pow(r, 2);
}
int main()
{
	double m1, m2, m3, r1, r2, r3, f1, f2, f3, f4;
	cin >> m1 >> m2 >> m3;
	cin >> r1 >> r2 >> r3;
	f1 = F(m1, m2, r1);
	f2 = F(m2, m3, r2);
	f3 = F(m1, m3, r3);
	f4 = max({ f1, f2, f3 }) - min({ f1, f2, f3 });
	cout << max({ f1, f2, f3 }) << " " << f4;
}
