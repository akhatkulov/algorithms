#include <iostream>
using namespace std;

int main() 
{
    long long a,b;
    cin>>a>>b;
    while(true){
      if(a%b==0){
        cout<<a;
        return 0;
      }
      a++;
    }
}
