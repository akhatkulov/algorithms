#include <iostream>
 
using namespace std;
 
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    if((a>=94 && b>=94 && c>=94)&&(a<=727 && 
        b<= 727 && c <= 727)){
        if (a==b and b == c){
            cout<<a;
        }
        else{
        cout<<max(max(a,b),c);
        }
        }
    else{
        cout<<"Error";
    }
}
