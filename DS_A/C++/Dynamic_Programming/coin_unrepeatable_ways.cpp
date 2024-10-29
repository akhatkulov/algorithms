#include <iostream>
#include <vector>

#define ll long long
using namespace std;

int main() 
{
    ll MOD = 1000000007;   //masalada 10ning 9 darajasi + 7 ga qoldiqli bo'l degan
    int n,x;
    cin>>n>>x; // n tangalar soni, x bu qiymat
    
    vector<int> tangalar(n);  //tangalar
    
    for(int i = 0; i<n; i++){
      cin>>tangalar[i];
    }
    
    
    vector <int> baza(x,0); // baza yaratdik
    baza[0] = 1; // bazani sozladik
    
    
    // tangalarni birinchi siklda olishimizga sabab bu takrorlanmasligi kerak ekani!
    for(int j: tangalar){ // tangalarni oldik 
      for(int i = 0; i<=x; i++){ // qiymatga qarab yurdik
          if(i-j>=0) baza[i] =  (baza[i] + baza[i-j])%MOD; // qoldiqga bo'lik undan oldin esa qiymat yo'llarini o'zaro qo'shib oldik
        }  
    }
    
    cout<<baza[x];
    
}
