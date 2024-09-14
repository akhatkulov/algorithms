#include <iostream>
using namespace std;

int main() {
    long long A, B;
    string line;
    
    getline(cin, line);
    
    if (line.find(' ') != string::npos) {
        sscanf(line.c_str(), "%lld %lld", &A, &B);
        cout << A + B << endl;
    } else {
        A = stoll(line);
        cin >> B;
        cout << A * B << endl;
    }

    return 0;
}
