#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    long long a[3];
    cin>>a[0]>>a[1]>>a[2];
    long long res = a[0];
    for(int i = 0; i<3; i++){
      res = max(res,a[i]);
    }
    cout<<res;
}
