#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (ll i = 0; i < t; ++i) {
        ll y, x;
        cin >> y >> x;
        vector<ll> l(y);
        
        for (ll j = 0; j < y; ++j) {
            cin >> l[j];
        }
        
        for (ll j = 0; j < y; ++j) {
            if (x >= l[j]) {
                x += l[j];
            }
        }
        
        cout << x << endl;
    }

    return 0;
}
