#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int calc(const string& a, const string& b) {
    int n = a.size();
    int m = b.size();
    vector<int> prev_row(m + 1), curr_row(m + 1);

    for (int j = 0; j <= m; ++j) {
        prev_row[j] = j;
    }

    for (int i = 1; i <= n; ++i) {
        curr_row[0] = i;
        for (int j = 1; j <= m; ++j) {
            int cost = (a[i - 1] == b[j - 1]) ? 0 : 1;
            curr_row[j] = min({prev_row[j - 1] + cost,
                               curr_row[j - 1] + 1,     
                               prev_row[j] + 1});      
        }
     swap(prev_row, curr_row);
    }

    return prev_row[m];
}

int main() {
    string a,b;
    cin>>a>>b;
    
    cout << calc(a, b) << endl;

    return 0;
}
