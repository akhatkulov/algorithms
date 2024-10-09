#include <iostream>
using namespace std;
int x,y,z,w,t;
void fun(int a,int b){
    if((w-(a*x+b*y))%z==0 && (w-(a*x+b*y))>=0){
        t++;
    }
    if((a*x+b*y)>w){
        a++;
        b=-1;
    }
    if(a*x>w){
        return;
    }
    fun(a,b+1);
}
int main(){
    cin>>x>>y>>z>>w;
    fun(0,0);
    cout<<t;
}
