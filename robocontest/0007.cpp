#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 1, f = 0;
    for (int z = 0; z < n; z++) {
        int temp = k + f;
        f = k;
        k = temp;
    }
    cout << f * 2 << endl;
    return 0;
}