/* n(2≤n≤100) ta elementdan iborat butun sonli massiv berilgan. Massivning ikkinchi eng katta elementini aniqlang. */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> l(a);
    for (int i = 0; i < a; ++i) {
        cin >> l[i];
    }
    sort(l.begin(), l.end());
    cout << l[a - 2] << endl;
    return 0;
}
