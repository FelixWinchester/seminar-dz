#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int x;
	int t = 0;
	cin >> x;
	while (x >= 0) {
		t++;
		cin >> x;
	}
	cout << t+1;
	return 0;
}

