#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double x, y;
	cin >> x >> y;
	if ((x >= -1 && x <= 1) && (y <= 3 && x >= -3) && sqrt(x * x + y * y) >= 2) {
		if (x == -1 || x == 1 || sqrt(x * x + y * y) == 2 || y == 3 || y == -3) {
			cout << "На границе";
			return 0;
		}
		cout << "Внутри";
		return 0;
	}
	cout << "Вне поля";
	return 0;
}
