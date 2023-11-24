/* h balandlikqan erkin tushayotgan jism qancha vaqtdan keyin yerga uriladi(g=9.8) */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double g = 9.8;
    double h;
    cin>>h;
    cout.precision(2);
    cout<<fixed<<sqrt(2*h/g);
}
