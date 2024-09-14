#include <iostream>

using namespace std;

int main() {

    long long n;

    cin>>n;

    long long min_son = n / 5;

    for (long long i = min_son; i >= 0; --i) {

        long long qoldiq = n - i * 5; 

        if (qoldiq % 3 == 0) {

            cout<< i + qoldiq / 3;

            return 0;

        }

    }

   cout<<-1;

    return 0;

}
