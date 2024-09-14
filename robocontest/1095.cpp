#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double a,javob1,javob2;
    cin>>a;
    javob1 = a + 273.15;
    javob2 = a * 1.80 + 32.00;
    
    cout << fixed << setprecision(5) << javob1 << endl;
    cout << javob2 << endl;
    return 0;
}
