#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long a,b;
    cin>>a>>b;
    vector <long> l(b);
    for (int i = 0; i < a; ++i) {
        cin >> l[i];
    }

    sort(l.end(),l.begin());

    int res = 0;
    while(a!=0){
        cout<<res;
        cout<<a;
        res++;
        a-=l[res];
    }
    cout<<res;
}
