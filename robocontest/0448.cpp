#include <iostream>

using namespace std;

int main(){
  int a,b,c,x;
  cin>>a>>b>>c>>x;
  int res = a*(x*x)+(b*x)+c;
  if(res==0){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
}
