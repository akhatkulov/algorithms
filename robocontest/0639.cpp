#include <iostream>

using namespace std;

int main(){
	int a,r;
	cin>>a;
	int cnt = 0,i=1;
	while(true){
		r  = i*(i+1)/2;
		if(a>=r){
			a -= r;
			cnt++;
			i++; 
		}else{
			break;
		}
	}
	cout<<cnt;
}
