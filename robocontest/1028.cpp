#include <iostream>
#include <vector>

#define ll long long
using namespace std;

int main(){
	ll n,r,x;
	cin>>n>>r;
	vector<ll> vs(n+1);
	cin>>x;
	vs[0]=x;
	for(int i = 1; i<n; i++){
		cin>>x;
		vs[i]=vs[i-1]+x;
	}
	vector<ll> c(n+1);
	for(int i = 0; i<n; i++){
		if(i-r-1 < 0 || i+r>n-1 ){
			ll xx,yy;
			if(i-r-1<0){
				xx = 0;
			}else{
				xx=vs[i-r-1];
			}
			if(i+r>n-1){
				yy = vs[n-1];
			}else{
				yy = vs[i+r];
			}
			c[i]=yy-xx;
		}else{
			c[i]=vs[i+r] - vs[i-r-1];
		}
	}
	for(int i = 0; i<n; i++){
		cout<<c[i]<<" ";
	}
}
