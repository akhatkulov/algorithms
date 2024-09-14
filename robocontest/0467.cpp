#include <iostream>

using namespace std;

int main(){
  long long a,b;
  cin>>a>>b;
  if(b%2==0){
    cout<<a+(b/2)+1;
  }else{
    cout<<-1;
  }
}
