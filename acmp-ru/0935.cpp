#include <iostream>
 
using namespace std;
 
int main(){
    int a, b,c,d;
    cin>>a >> b >>c >> d;
    int rang = 0;
    int rang1 = 0;
    if(a%2!=0 and b%2!=0)
        {rang+=1;}
    else if(a%2==0 and b%2!=0)
        {rang+=2;}
    else if(a%2!=0 and b%2==0)
    {
        rang+=2;
    }    
    else if(a%2==0 and b%2==0)
    {
        rang+=1;
    }
     
    if(c%2!=0 and d%2!=0)
        {rang1+=1;}
    else if(c%2==0 and d%2!=0)
        {rang1+=2;}
    else if(c%2!=0 and d%2==0)
    {
        rang1+=2;
    }    
    else if(c%2==0 and d%2==0)
    {
        rang1+=1;
    }
if (rang1 == rang){
    cout<<"YES";
}else{
    cout<<"NO";
}
     
}
