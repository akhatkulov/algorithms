/* Konusni balandligi h va radiusi r bo`lsa uni hajmi nimaga teng bo`ladi. */

#include <iostream>
#include <cmath>
using namespace std;
// V = (1/3) * π * r^2 * h
int main(){
    int r,h;
    cin>>h>>r;
    cout.precision(2);
    cout<<fixed<<(M_PI*(r*r)*h)/3;
}

