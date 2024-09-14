#include <iostream>
#include <iomanip>

using namespace std;

bool isPalindrome(int hh, int mm) {
    string time = (hh < 10 ? "0" : "") + to_string(hh) + (mm < 10 ? "0" : "") + to_string(mm);
    return time == string(time.rbegin(), time.rend());
}
int main() {
    int hh, mm;
    char colon;
    cin >> hh >> colon >> mm;
    while (true) {
        mm++;
        if (mm == 60) {
            mm = 0;
            hh++;
            if (hh == 24) {
                hh = 0;
            }
        }
        if (isPalindrome(hh, mm)) {
            cout << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << endl;
            break;
        }
    }
    return 0;
}
