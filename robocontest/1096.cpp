#include <iostream>
#include <vector>

using namespace std;

int main(){
	int a;
	cin>>a;
	vector <int> vs(a);
	for(int i = 0; i<a; i++){
		cin>>vs[i];
	}
	
	int res = 0;
	for(int i = 0; i<a; i++){
		for(int j = i+1;  j < a; j++){
			if(vs[i]==vs[j]){
				res++;
			}
		}
	}
	
	cout<<res;
}
