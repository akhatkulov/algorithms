#include <iostream>
#include <string>

using namespace std;

bool residual(int a) {
    string s = to_string(a);
    for (char digit : s) {
        if (digit == '0' || a % (digit - '0') != 0) {
            return false;
        }
    }
    return true;
}


int checker(int a) {
    if (to_string(a).find('0') != string::npos) {
        return 0;
    }
    return residual(a) ? 1 : 0;
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; ++i) {
        cnt += checker(i);
    }
    
    cout << cnt << endl;
    return 0;
}
