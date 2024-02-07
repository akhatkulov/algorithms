#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main(){
    string a,d;
    cin>>a;
    d = a;
    reverse(d.begin(),d.end());
    if(a==d)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
