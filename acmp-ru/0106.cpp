/* На столе лежат n монеток. Некоторые из них лежат вверх решкой, а некоторые – гербом. Определите минимальное число монеток, которые нужно перевернуть, чтобы все монетки были повернуты вверх одной и той же стороной.*/

#include <iostream>
using namespace std;
int main(){
    long long a;
    int k,l;
    cin>>a;
    for(int i = 0 ; i<a ; ++i){
        int t;
        cin>>t;
        if(t==0){
            k+=1;
        }else{
            l+=1;
        }
    }
    if(k>l){
         cout<<l;
    }else if(k==l){
         cout<<k;
    }else{
         cout<<k;
    return 0;
}
}
