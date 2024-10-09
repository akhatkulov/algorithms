#include <iostream>

using namespace std;
long long cnt=0,x;
void checker(int a,int b,int c){
	
	
	if((x-(a+b+c))>=c){
		cnt++;
	}
	
	if((a+b+c)>x){
		b+=1;
		c=b-1;
	}
	
	if((a+b) > x){
		a+=1;
		b=a;
		c=b-1;
	}
	
	if(a>x){
		return;
	} 
	checker(a,b,c+1);
}

int main(){
	cin>>x;
	checker(1,1,1);
	cout<<cnt;
}
