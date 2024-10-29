#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	
	vector <int> l_p(n);
	vector <int> l_w(n);
	for(int i = 0; i<n ; i++){
		cin>>l_p[i];
	}
	for(int i = 0; i<n ; i++){
		cin>>l_w[i];
	}
	
	vector <int> baza(x+1,0);
	int pul,to;
	for(int i = 0; i < n; i++){
		pul = l_p[i];
		to = l_w[i];
		for(int j = x; j>=pul; j--){
			baza[j] = max(baza[j],baza[j-pul]+to);
		}
	}
	
	cout<<baza[x];
}
