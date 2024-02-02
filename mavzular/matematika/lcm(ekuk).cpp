//        long long lcm = (long long)x * y / std::__gcd(x, y); bu formula 


#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int a,b,res;
    cin>>res;
    for(int i = 0; i<res; i++)
    {   
        cin>>a>>b;
        cout<<lcm(a,b)<<endl;
    }
}
