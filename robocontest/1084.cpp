#include <iostream>
using namespace std;
int n,k,t;
int a[99999];
void fun(int n,int m){
    if(n>0 && k==a[m]){
        t++;
        return;
    }else if(n==0){
        return;
    }else{
        fun(n-1,a[m]);
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        k=i;
        fun(n/2,i);
    }
    if(t==n){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}
