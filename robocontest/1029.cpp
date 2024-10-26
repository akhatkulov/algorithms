#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
long long x[1000001],a[1000001],b[1000001];
int main(){
    int n,k;
    long long l;
    cin>>n>>k>>l;
    long long s=0;
    for(int i=1;i<=n;i++){
        cin>>x[i];
        s+=x[i];
        a[i]=s;
    }
    for(int i=1;i<=n;i++){
        if(i+k>n){
            b[i]+=a[n];
        }else{
            b[i]+=a[i+k];
        }if(i-k-1<1){
            b[i]-=0;
        }else{
            b[i]-=a[i-k-1];
        }
    }
    map<long long,long long> mp;
    for(int i=1;i<=n;i++){
        mp[b[i]]+=x[i];
    }
    for(auto& t:mp){
        if(t.first<=l){
            l+=t.second;
        }else{
            cout<<"Game over";
            return 0;
        }
    }
    cout<<"Next level "<<l;
}
