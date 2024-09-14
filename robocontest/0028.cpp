#include <iostream>

using namespace std;

int main(){
  
  int x, a,b,c,d;
  cin>>x;
  for(int i = 0; i<x; i++){
    cin>>a>>b>>c>>d;
    cout<<2*c-a<<" "<<2*d-b<<endl;
  }
}
