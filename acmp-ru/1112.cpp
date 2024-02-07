#include <iostream>

using namespace std;

int main(){
    int a,a1,a2,a3;
    cin>>a;
    a3 = a%10; a/=10;
    a2 = a%10; a/=10;
    a1 = a%10;
    cout<<a1+a2+a3;
}
