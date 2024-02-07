#include <iostream>
 
using namespace std;
 
int main(){
    int i,a,b,x,y;
    x = 0; y = 0;
    for(i = 0; i<4;i++)
    {
        cin>>a>>b;
        x+=a;
        y+=b;
    }
    if (x>y)
    {
        cout<<1;
    }
    else if(x<y)
    {
        cout<<2;
    }
    else
    {
        cout<<"DRAW";
    }
 
}
