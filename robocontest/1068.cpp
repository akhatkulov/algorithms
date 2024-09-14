#include <iostream>
using namespace std;

int main() 
{
    string a,b;
    cin>>a>>b;
    if(a[a.size()-1]=='v'){
      cout<<b<<" "<<a;
    }else{
      cout<<a<<" "<<b;
    }
}
