#include <iostream>
using namespace std;

int main() 
{
    int i1=0,i2=0;
    string a;
    cin>>a;
    if(a.size()==6){
      i1 +=(a[0]-'0')+(a[1]-'0')+(a[2]-'0');
      i2 +=(a[3]-'0')+(a[4]-'0')+(a[5]-'0');
      if(i1==i2){
        cout<<"YES";
      }
      else{
        cout<<"NO";
      }
    }
    else{
      cout<<"NO";
    }
}
