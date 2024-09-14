#include <iostream>

using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a==b==c){
    cout<<1;
  }else if(a>b==c or a==b>c or a<b==c or a==b<c){
    cout<<2;
  }else{
    cout<<3;
  }
}
