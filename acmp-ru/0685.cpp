#include <iostream>
 
using namespace std;
 
int main(){
    int a1,a2,a3,a4,a5,a6;
    cin>>a1>>a2>>a3>>a4>>a5>>a6;
    int min1 = min(a1,min(a2,a3));
    int max1 = max(a1,max(a2,a3));
    int norm1 = (a1+a2+a3)-(min1+max1);
     
    int min2 = min(a4,min(a5,a6));
    int max2 = max(a4,max(a5,a6));
    int norm2 = (a4+a5+a6)-(min2+max2);
     
    int x = min1 * min2;
    int y = norm1 * norm2;
    int z = max1 * max2;
     
    cout<<x+y+z;
}
