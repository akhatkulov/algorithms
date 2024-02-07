#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int a,b,a1,b1;
    cin>>a>>b;
    cin>>a1>>b1;
    if(a1-a == b1-b or a1-a == -(b1-b) or a-a1==0 or b - b1 ==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
