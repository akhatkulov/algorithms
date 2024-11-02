#include <iostream>

#define ll long long

using namespace std;

int main(){
	ll a,b,mx=-1;
	cin>>a;
	for(ll i = 0; i<a; i++){
		cin>>b;
		if(b>mx and b%2==0) mx=b;
	}
	cout<<mx;
}
