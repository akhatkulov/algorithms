#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<setprecision(1)<<fixed<<max(abs(x1-x2),abs(y1-y2))*0.5;
}
