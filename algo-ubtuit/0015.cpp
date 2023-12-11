/* Zanjirlaring R1,R2 va R3 qarshilig o`zaro parallel ulangan. Ularnig umumiy qarshiligini toping. */

#include <iostream>

using namespace std;

int main() {
    double a,b,c;
    cin>>a>>b>>c;
    double res = 1 / ((1/a)+(1/b)+(1/c));
    cout.precision(2);
    cout<<fixed<<res;
}
