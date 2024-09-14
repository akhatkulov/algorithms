#include <iostream>

using namespace std;

int main(){
  long long a;
  cin>>a;
  if((a%4==0 and a%100!=0) or a%400==0){
    cout<<"Kabisa yili";
  }else{
    cout<<"Kabisa yili emas";
  }
}
