/* X,Y∈Z; X≤Y; X*Y=Z;
shartlarini qanoatlantiruvchi 
(x,y) juftliklar sonini aniqlang! */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;
    int s = 0;
    int n = 0;
    if (x == 0) {
        s = -1;
    } else {
        if (x < 0) {
            n = -x;
        } else {
            n = x;
        }
        int i = 1;
        while (i * i <= n) {
            if (n % i == 0) {
                s += 1;
                if (i * i != n) {
                    s += 1;
                }
            }
            i += 1;
        }
        if (s % 2 && x > 0) {
            s += 1;
        }
    }
    cout << s;
    return 0;
}
