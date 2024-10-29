#include <iostream>
#include <limits>
#include <vector>
 
#define ll long long
 
using namespace std;
 
int main(){
	int n,x;
	cin>>n>>x;
	vector <int> tangalar(n+1); 
	
	int dump;
	for(int i = 0; i<n; i++){
		cin>>dump;
		tangalar[i]=dump;
	}
	
	vector <int> baza(x+1,numeric_limits<int>::max()); // baza yaratdik
	
	baza[0] = 1; // bazani sozladik
	
	for(int c: tangalar){ // 1-sikl! Tangalardan bir tanga tanlab oldik
		for(int q = c; q<=x; q++){ // 2-sikl! Tanlab olingan tangani hosil qilishimiz kerak bo'lgan qiymatga qarab surdik!
			baza[q]=min(baza[q],baza[q-c]+1); // solishtiryapmiz
		}
	}
	
	if(baza[x-1]==numeric_limits<int>::max()){ // numeric_limits<int>::max() bu maksimal son
		cout<<-1;
	}else{
		cout<<baza[x-1];
	}
