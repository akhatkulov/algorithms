/* Требуется посчитать сумму целых чисел, расположенных между числами 1 и N включительно. */
/* математическая формула: */
/* n+ : (n*n+n))/2 */
/* n- : (n-n*n)/2+1 */

#include <iostream>

using namespace std;

int main(){
  long long n;
  cin>>n;
  if (n>0){
      cout<<(n*n+n)/2;
  }else{
      cout<<(n-n*n)/2+1;
  }
  return 0;
}
