/* Katta-kichik
Sonlar ustida amallarning eng muximlaridan biri bu - taqqoslashdir. Ushbu masalada sizga qo'yilgan talab, ikkita butun sonni taqqoslash kerak bo'ladi*/

#include <iostream>

using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"=";
    }else if(a<b){
        cout<<"<";
    }else{
        cout<<">";
    }
}