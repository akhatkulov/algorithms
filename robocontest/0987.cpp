#include <iostream>
#include <algorithm> 
#include <numeric>  
#include <limits>

using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;


    long long factA = factorial(a);
    long long factB = factorial(b);

    long long result = gcd(factA, factB);

    cout << result << endl;
    return 0;
}
