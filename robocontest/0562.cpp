#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n, x;
    cin >> m >> n;
    vector<int> a;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(), a.end());  
    
    int r=0;
    int i = 0;
    for (const auto& d : a) {
        if(r>=m){
          cout<<i;
          break;
        }
        r+=d;
        i++;
    }
    if(r<m){
      cout<<-1;
    }

    return 0;
}
