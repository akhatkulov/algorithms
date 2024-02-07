#include <iostream>
#include <cmath>
using namespace std;
     
int main()
{
    int a,b,a1,b1;
    cin>>a>>b;
    cin>>a1>>b1;
    if(a==a1){
        if(b==2 and b1-b==2){
            cout<<"YES";
        }
        else if(b>1 and b1-b==1){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
}
