#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int a) {
    if (a < 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long a, b;
    cin >> a >> b;
  	if (abs(a-b)!=2){
      	cout << "No";
  	}
    else if (is_prime(a) && is_prime(b)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
