#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() 
{
    int a;
    cin>>a;
    vector <int> res{};
    
    for(int i = 1; i<=a; i++){
      if(i%3==0 || i%5==0 || i%7==0){
        res.push_back(i);
      }
    }
    int main_res = accumulate(res.begin(),res.end(),0);
    cout<<main_res;
}
