#include <iostream>
 
using namespace std;
 
int main(){
    int a;
    cin>>a;
    int a1,a2,a3,a4,a5,a6;
    a6 = a%10; a /= 10;
    a5 = a%10; a /= 10;
    a4 = a%10; a /= 10;
    a3 = a%10; a /= 10;
    a2 = a%10; a /= 10;
    a1 = a%10; a /= 10;
    if (a1+a2+a3 == a4+a5+a6)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
