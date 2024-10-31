#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main(){
	ll a;
	cin>>a;
	vector <ll> l(a);
	
	for(ll i = 0; i<a; i++){cin>>l[i];}
	
	vector <ll> baza(a+1,1);
	
	for(ll i = 0; i < a; i++){
		for(ll j = 0; j<i; j++){
			if(l[i]>l[j]){
				baza[i] = max(baza[i],baza[j]+1);
			}
		}
	}
	
	cout<<*max_element(baza.begin(),baza.end());
}
