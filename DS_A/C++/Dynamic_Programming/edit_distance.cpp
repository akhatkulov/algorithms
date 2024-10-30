#include <iostream>
#include <vector>
#include <algorithm> // min funksiyasi uchun

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    
    // 2D baza jadvali yaratamiz
    vector<vector<int>> baza(n + 1, vector<int>(m + 1));
    
    // Birinchi qator va ustunni to'ldiramiz
    for (int i = 0; i <= n; i++) {
        baza[i][0] = i;
    }
    
    for (int j = 0; j <= m; j++) {
        baza[0][j] = j;
    }
    
    // DP jadvalini to'ldirish
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                baza[i][j] = baza[i - 1][j - 1];
            } else {
                baza[i][j] = min({baza[i - 1][j - 1], // O'zgartirish
                                  baza[i][j - 1],     // Qo'shish
                                  baza[i - 1][j]}) + 1; // O'chirish
            }
        }
    }
    
    cout << baza[n][m] << endl;
    return 0;
}
