/* Требуется посчитать сумму целых чисел, расположенных между числами 1 и N включительно. */
/* математическая формула:  (n*(n+1))/2 */

#include <iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  cout<<(n*(n+1))/2;
  return 0;
}
