#include <iostream>
#include <vector>

#define ll long long
using namespace std;

int main(){
	ll a;
	cin>>a;
	
	vector <ll> baza(a+1);
	baza[0]=1;
	baza[1]=1;
	for(int i = 2; i<=a; i++){
		baza[i]=baza[i-1]+baza[i-2];
	}
	
	cout<<baza[a-1];
}
