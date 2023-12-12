/*Minimum va maksimum yig'indi
Beshta musbat butun son berilgan, ulardan to'rttasini ajratib olinganda umumiy yig'indisi bo'lishi mumkin bo'lgan minimum qiymat va maksimum qiymatni aniqlang.

*/

#include <iostream>

using namespace std;

int main(){

    long long a1,a2,a3,a4,a5;
    cin>>a1>>a2>>a3>>a4>>a5;
    long long res = a1+a2+a3+a4+a5;
    long long res_m = res - max(max(max(a1,a2),max(a3,a4)),a5);
    long long res_n = res - min(min(min(a1,a2),min(a3,a4)),a5);

    cout<<res_m<<" "<<res_n;

}