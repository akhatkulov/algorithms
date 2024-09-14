#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(2) << (y / x) * 100 <<"%";
    return 0;
}
