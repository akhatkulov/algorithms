#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    char a;
    map<char, int> mp;
    while (cin >> a) {
        mp[a]++;
    }

    string l1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < l1.size(); i++) {
        cout << l1[i] << " " << mp[l1[i]] << endl;
    }

    return 0;
}
