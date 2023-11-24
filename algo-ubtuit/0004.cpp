/* Radiusi r bo`lgan sharning yuzini toping. */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int r;
    cin>>r;
    cout.precision(2);
    double res = 4*M_PI*r*r;
    cout<<fixed<<res;
}
