#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define ll long long
int main(){
  string a;
  cin>>a;
  vector <ll> vs(a.size()+1,0);
  if (a.size()==0 or a[0]== '0'){
    cout<<"0";
    return 0;
  }
  vs[0] = vs[1] = 1;
  ll x,y;
  for(ll i = 2; i<=a.size(); i++){
    x = stoll(a.substr(i - 1, 1));
    y = stoll(a.substr(i - 2, 2));
    
    if(x >= 1 and x<= 9)vs[i] += vs[i-1];
    
    if(y>=10 and y<=26)vs[i] += vs[i-2];
  }
  
  cout<<vs[a.size()];
}
