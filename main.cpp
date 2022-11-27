#include <iostream>
using namespace std;

int main() {
int a, b, c, i, n;
cin >> n;
a = 1;
b = 1;
cout << a << b << endl;
for (i = 0; i<=n; i = i+a) {
c = a + b;
a = b;
b = c;
cout << c << endl;
}
}
