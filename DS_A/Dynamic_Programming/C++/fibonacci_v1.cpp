// Bu usul rekursiyaga asoslanib yechilgan!

#include <iostream>
#include <vector>

#define ll long long
using namespace std;

vector <ll> baza;

ll f(ll a){
  if(a==0) return 0;
  if(a==1) return 1;
  
  if(baza[a]!=-1) return a;
  
  return f(a-1) + f(a-2);
}

int main() 
{
    ll a;
    cin>>a;
    baza.resize(a+1,-1);
    cout<<f(a);
}
