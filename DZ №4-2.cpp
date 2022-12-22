#include <iostream>
using namespace std;
int main()
{
double x, s, f;
int k, d;
cin >> k >> x;
f = x * x * x;
d = 1;
s = 0;
for (int i = 1; i <= k; i++) {
d *= i;
s += d * f;
f *= x * x;
}
cout << s;
return 0;
}
