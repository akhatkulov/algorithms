#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;

    ll t = n * (n + 1) / 2;
    ll k = n / m;
    ll v1 = m * k * (k + 1) / 2;
    ll v2 = t - v1;
    cout << abs(v2 - v1) << endl;

    return 0;
}
