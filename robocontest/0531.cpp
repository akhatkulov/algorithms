#include <iostream>

using namespace std;

int main(){
  int a;
  cin>>a;
  int x[a+10],y[a+10];
  for(int i = 0 ; i < a ; i++ ){
    cin>>x[i];
  }
  for(int i = 0 ; i < a ; i++ ){
    cin>>y[i];
  }
  
  for(int i = 0 ; i < a ; i++ ){
    if(x[i]!=y[i]){
      cout<<1<<" ";
    }else{
      cout<<"0"<<" ";
    }
  }
}
