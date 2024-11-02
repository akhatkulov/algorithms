#include <iostream>

#define ll long long

using namespace std;

int main(){
	ll a;
	int b;
	cin>>a>>b;
	for(int i = 0; i < b; i++){
		if(a%10==0){
			a/=10;
		}else{
			a-=1;
		}
	}
	
	cout<<a;
}
