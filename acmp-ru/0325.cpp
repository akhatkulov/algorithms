#include <iostream>
#include <string>
using namespace std;
bool k = 0;
int p = 0;

int kon(int n, string c, string d)
{
       n++;
       if (n == 3) return 0; // нельзя
       if (k) return n;
       if (abs(c[0] - d[0]) == 1 && abs(c[1] - d[1]) == 2) {
             k = 1; p = n;
             return n;
       }     
       if (abs(c[0] - d[0]) == 2 && abs(c[1] - d[1]) == 1) {
             k = 1; p = n;
             return n;
       }
       c[0]++; c[1] += 2; if (c[0]<='h' && c[1]<='8') kon(n, c, d);
       c[1] -= 4; if (c[1]>='1') kon(n, c, d);
       c[0]-=2; if (c[0]>='a') kon(n, c, d);
       c[1] += 4; if (c[1]<='8') kon(n, c, d);
       c[0]--; c[1]--; if (c[0]>='a' && c[1]>='1') kon(n, c, d);
       c[1]-=2; if (c[1]>='1') kon(n, c, d);
       c[0]+=4; if (c[0]<='h') kon(n, c, d);
       c[1]+=2; if (c[1]<='8') kon(n, c, d);
       return n;
}

int main() {
       string a;
       getline(cin, a);
       int s;
       s=kon(0, a.substr(0,2), a.substr(4,2));
       if (! k) cout << "NO"; else cout << p;
       return 0;
}
