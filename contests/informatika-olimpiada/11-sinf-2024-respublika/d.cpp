////////// WARNING: Time Limit 10

#include <iostream>
using namespace std;

#define ll long long

ll calc(ll x, ll y) {
    ll cnt = 0;
    while (x > 0 && y > 0) {
        cnt += x * y;
        x -= 1;
        y -= 1;
    }
    cnt += (x * (x + 1)) / 2;
    cnt += (y * (y + 1)) / 2;
    return cnt;
}

int main() {
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        ll x, y;
        cin >> x >> y;
        cout << calc(x, y) << endl;
    }
    return 0;
}
