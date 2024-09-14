#include <iostream>
using namespace std;
int main(){
    double n,a,b;
    cin>>n>>a>>b;
    double x=((1-a/100.0)*n)/(1-b/100.0);
    cout.precision(5);
    cout<<fixed<<x;
    return 0;
}
