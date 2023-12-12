/*Sizga butun sonlar to'plami berilgan. To'plamda 1 1 ta elementdan tashqari barchasini jufti bor. To'plamdagi yagona jufti bo'lmagan yolg'iz sonni toping.
Masalan: 
[1,2,3,4,5,2,1]
[1,2,3,4,3,2,1] to'plamida yolg'iz son 
4
4 sonidir. */

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> b(a);
    unordered_map<int, int> countMap;
    for (int i = 0; i < a; i++) {
        cin >> b[i];
        countMap[b[i]]++;
    }
    for (int i = 0; i < a; i++) {
        if (countMap[b[i]] == 1) {
            cout << b[i] << endl;
        }
    }
    return 0;
}