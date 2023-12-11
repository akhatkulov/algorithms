/* Masala manzili: https://algo.ubtuit.uz/problem/16*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x,y;
    cin>>x>>y;
    double a = x+y;
    double b = y*y+abs(y*y+2)/(x+((x*x*x)/5));
    double res = (a / b + pow(M_E,y+2)) ;
    cout.precision(2);
    cout<<fixed<<res;
}
