#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  string a;
  getline(cin,a);
  reverse(a.begin(),a.end());
  for(int i = 1; i<a.size(); i++){
    if((a[i]=='s' && a[i-1]=='h')|| (a[i]=='c' && a[i-1]=='h') || (a[i]=='n' and a[i-1]=='g')){
      swap(a[i],a[i-1]);
    }
}
cout<<a;
}
