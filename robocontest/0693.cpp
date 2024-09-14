#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int a;
  string x;
  cin>>a;
  vector<string>vs{};
  vector<int>::iterator it;
  while(cin>>x){
    vs.push_back(x);
  }
  
  for(auto&it:vs){
    if(it.size()>a){
      string res = it;
      reverse(res.begin(),res.end());
      cout<<res<<" ";
    }else{
      cout<<it<<" ";
    }
  }
}
