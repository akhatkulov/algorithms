#include <iostream>
using namespace std;

int main() {
    long long a, b, c = 0;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        if (i % 3 == 0 && i % 7 != 0) {
            c += i;
        }
    }

    cout << c << endl;
    return 0;
}
