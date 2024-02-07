#include <iostream>
 
using namespace std;
 
int main(){
    char a, b;
    cin>>a >> b;
    a -=64; b-=48;
    if(a%2!=0 and b%2!=0)
    cout<<"BLACK";
    else if(a%2==0 and b%2!=0)
    cout<<"WHITE";
    else if(a%2!=0 and b%2==0)
    cout<<"WHITE";
    else if(a%2==0 and b%2==0)
    cout<<"BLACK";
}
