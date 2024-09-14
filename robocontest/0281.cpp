#include <iostream>
using namespace std;

int main() 
{
    int a, m[101]={0}, mx=0,k;
    cin>>a;
    for(int i = 0; i<a; i++){
      cin>>k;
      m[k]++;
    }
    
    for(int i = 0; i<101; i++){
      mx = max(mx,m[i]);
    }
    cout<<a-mx;
}
