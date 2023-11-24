/* Zanjiring kuchlanishi U va R qarshiligi. Zanjirdan oqib o`tayotgan to`q kuchini toping. */

#include <iostream>

using namespace std;

int main(){
  double u,r;
  double res;
  cin>>u>>r;
  res = u/r;
  cout.precision(3);
  cout<<fixed<<res;
  return 0;
}
