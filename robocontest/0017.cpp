/* O’z raqamlar yig’indisining kvadratiga bo’linadigan sonlar g’aroyib son deb ataladi!

Masalan: 
162

162 soni (1+6+2)**2 2ga qoldiqsiz bo’linadi. */

#include <iostream>
using namespace std;
int res1(int n)
{
  int s=0, p;
  while (n>0)
  {
    p=n%10;
    s=s+p;
    n=n/10;
  } 
    return s*s;
}
int main()
{
  int n;
  cin>>n;
  int k=0;
  int i=1, h;
  while (k<n)
  {
    if(i%res1(i)==0) k++;
    h=i; i++;
  }
  cout<<h<<endl;
  return 0;
}
  
