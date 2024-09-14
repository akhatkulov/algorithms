#include <iostream>

using namespace std;

int main(){
  long long a;
  cin>>a;
  if(a<6){
    cout<<0;
    return 0;
  }
  a-=6;
  cout<<(a+2)*(a+1)/2;
}
