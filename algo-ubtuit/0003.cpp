/* Yuzasi s va balandligi h bo`lgan uch burchak berilgan. Uni asosini toping.*/

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
