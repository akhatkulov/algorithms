/* https://robocontest.uz/tasks/0550 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int diff = abs(a - b);
    int result = (diff + 9) / 10;
    cout << result << endl;
    return 0;
}
