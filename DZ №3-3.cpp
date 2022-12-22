#include <iostream>
using namespace std;
bool f(double &x) {
	if (x < 0) {
		x = x * (-1);
	}
	if (x == 0) {
		return false;
	}
	if (x != 0 && x > 0) {
		return true;
	}
}

int main()
{
	double a;
	cin >> a;
	f(a);
	cout << f(a);
}
