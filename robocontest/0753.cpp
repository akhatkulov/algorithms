#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

double calculate_F(double x, double y) {

    double term1 = 1.0 / (x + (2.0 / (x * x)) + (3.0 / (x * x * x)));
    double term2 = exp(x * x + 3.0 * x);
    double numerator = term1 + term2;
    

    double term3 = atan(x + y);
    double term4 = pow(abs(5.0 + x), 2);
    double denominator = term3 + term4;
    

    double term5 = y * y + (x * x / 2.0);
    double cos_squared = cos(term5) * cos(term5);
    

    double F = numerator / denominator - cos_squared;
    
    return F;
}

int main() {
    double x, y;
  
    cin >> x>>y;
    
    double result = calculate_F(x, y);
    cout.precision(2);
    cout<<fixed<<result;
    
    return 0;
}
