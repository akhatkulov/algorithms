#include <iostream>

using namespace std;

int gcd(int a,int b,int t = 0){
	while(b != 0){
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main(){
	int a,b;
	cin>>a>>b;
	int r = 7 - max(a,b);
	int g = gcd(r,6);
	cout<<r/g<<"/"<<6/g;
}
