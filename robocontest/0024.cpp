#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    int a1,b1,c1;
    cin>>a>>b>>c;
    cin>>a1>>b1>>c1;
    int res = (a*3600)+(b*60)+c;
    int res1 = (a1*3600)+(b1*60)+c1;
    cout<<res1-res;
    
}
