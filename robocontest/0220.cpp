#include <iostream>

using namespace std;

bool calcer(int a,int x){
	int res = 0;
	while(a!=0){
		res+=a%10;
		a/=10;
	}
	return res==x;
}


int main(){
	int l,r,n;
	cin>>l>>r>>n;
	
	int mn = 999999;
	int mx = 0;
	
	for(int i = l; i<=r; i++){
		if( calcer(i,n) ){
			mn = min(mn,i);
			mx = max(mx,i);
		}	
		// cout<<i<<" "<<calcer(i,n)<<endl;
	}
	//cout<<calcer(14,5)<<endl;
	cout<<mn<<endl;
	cout<<mx<<endl;
}
