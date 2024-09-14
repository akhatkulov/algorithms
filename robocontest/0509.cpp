#include <iostream>

using namespace std;

int main(){
  char a;
  int X = 0,O = 0;
  
  while(cin>>a){
    if(a=='O'){
      O++;
    }
    if(a=='X'){
      X++;
    }
  }
  
  if(X>O){
    cout<<"X";
  }else{
    cout<<"O";
  }
}
