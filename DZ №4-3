#include <iostream>
using namespace std;
int main()
{
double x, a, s;
int n = 1, d = 1;
const double eps = 1e-9;
cin >> x;
a = 0.5;
s = 0;
while (a > eps) {
for (int j = 1; j < 2*n; j++) {
d *= j;
}
a = n * (n - 1) * pow(x, 2 * n) / d;
s += a;
n++;
d = 1;
}
cout << s;
}
