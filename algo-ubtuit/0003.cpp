#include <iostream>
using namespace std;
int main() {
    double s,h,a;
    cin>>s>>h;
    a=2*s/h;
    cout.precision(2);
    cout <<fixed<<a;
    return 0;
}
