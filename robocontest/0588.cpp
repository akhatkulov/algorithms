#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, x = 0;
    string o;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>o;
        if (o == "X++" || o == "++X") {
            x++;
        } else if (o == "X--" || o == "--X") {
            x--;
        }
    }

    cout<< x << endl;
    return 0;
}
