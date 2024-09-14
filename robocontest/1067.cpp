#include <iostream>
using namespace std;

int main() 
{
    long long a,b,y;
    cin>>a>>b;
    bool res = false;
    for(int i = 1; i<a;i++){
      y = a - i;
      if(i*y == b){
        cout<<y<<" "<<i;
        res = true;
        break;
      }
    }
    if(!res){
      cout<<-1;
    }
}
