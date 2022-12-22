#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int b, a, c, d;
	cin >> b >> a >> c;
	setlocale(LC_ALL, "Russian");
	d = pow(b, 2) - 4 * a * c;
	if (d > 0) {
		cout << "Два корня";
	} if (d == 0) {
		cout << "Один корень";
	} if (d < 0) {
		cout << "Нет корней";
	}
	return 0;
}
