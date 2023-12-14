/* N natural sonning o’zbek lotin yozuvida yozilishini chop eting.

1 – bir

2 – ikki

3 – uch

4 – to’rt

5 – besh

6 – olti

7 – yetti

8 – sakkiz

9 – to’qqiz

10 – o’n

20 – yigirma

30 – o’ttiz

40 – qirq

50 – ellik

60 – oltmish

70 – yetmish

80 – sakson

90 – to’qson

100 – bir yuz

1000 – bir ming

1000000 – bir million

1000000000 – bir milliard */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> a = {1000000000, 1000000, 1000, 100};
vector<string> b = {"milliard ", "million ", "ming ", "yuz "};
vector<string> c = {"", "o'n ", "yigirma ", "o'ttiz ", "qirq ", "ellik ", "oltmish ", "yetmish ", "sakson ", "to'qson "};
vector<string> d = {"", "bir ", "ikki ", "uch ", "to'rt ", "besh ", "olti ", "yetti ", "sakkiz ", "to'qqiz "};

string say(long long n) {
    for (long long i = 0; i < 4; i++) {
        if (n >= a[i]) {
            return say(n / a[i]) + b[i] + say(n % a[i]);
        }
    }
    return c[n / 10] + d[n % 10];
}

int main() {
    long long g;
    cin >> g;
    cout << say(g) << endl;
    return 0;
}
