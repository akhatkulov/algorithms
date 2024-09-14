#include <iostream>
#include <map>

using namespace std;

int main(){
  int a;
  cin>>a;
  map<int,string> mp ={
    {1,"Winter"},
    {2,"Winter"},
    {3,"Spring"},
    {4,"Spring"},
    {5,"Spring"},
    {6,"Summer"},
    {7,"Summer"},
    {8,"Summer"},
    {9,"Autumn"},
    {10,"Autumn"},
    {11,"Autumn"},
    {12,"Winter"},
  };
  if(a>=1 and a<=12){
    cout<<mp[a];
  }else{
    cout<<"Error";
  }
}
