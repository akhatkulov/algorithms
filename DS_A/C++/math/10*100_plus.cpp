#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	string res = "";
	int q=0,target=0;
	if (a.size() < b.size()) swap(a, b);
	
	while (b.size() < a.size()) b = "0" + b;
	
	for(int i = a.size()-1; i>=0; i--){
		target = (a[i]-'0') + (b[i]-'0') + q;
		res+= to_string(target%10);
		q = target/10;
	}
	if (q > 0) res += to_string(q);
	
	reverse(res.begin(), res.end());
	cout<<res;
		
}
