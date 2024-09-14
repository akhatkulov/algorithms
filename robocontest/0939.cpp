#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> mp = {
        {1, "VIP 210K"},
        {10, "VIP 210K"},
        {2, "Econom 105K"},
        {3, "Econom 105K"},
        {4, "Econom 105K"},
        {5, "Econom 105K"},
        {6, "Econom 105K"},
        {7, "Econom 105K"},
        {8, "Business 140K"},
        {9, "Business 140K"}
    };

    int a;
    cin >> a;
    cout << mp[a] << endl;

    return 0;
}
