#include <iostream>
using namespace std;
int main()
{
double b3, b2 = 2, b1 = 1;
int n;
cin >> n;
b3 = 0;
for (int i = 3; i <= n; i++) {
b3 = b2 / (b1 + 1);
b1 = b2;
b2 = b3;
cout << b3 << " ";
}
return 0;
}
