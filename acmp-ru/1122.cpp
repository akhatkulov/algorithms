#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int a,b,a1,b1;
    cin>>a>>b;
    cin>>a1>>b1;
    if(pow(a1-a,2)+pow(b1-b,2)==1 or pow(a1-a,2)+pow(b1-b,2)==2 )
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
