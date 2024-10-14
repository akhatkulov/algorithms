#include <iostream>
 
using namespace std;
 
int main(){
  long long a,cnt=0;
  cin>>a;
  while(a>1){
    a = (a+1)/2;
    cnt++;
  }
  cout<<cnt;
  return 0;
}
