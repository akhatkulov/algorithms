/* Radiuslari r1, r2, r3 bo’lgan 3 to doira radiuslari berilgan. Doiralarni yuzlarini hisoblang. */

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
