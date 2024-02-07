#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a=="black" and b == "black"){
        if(c=="green"){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<"GREEN"<<endl;
        }else if(c=="GREEN"){
            cout<<a<<endl;
            cout<<"yellow"<<endl;
            cout<<"black"<<endl;
        }else{
            cout<<"error";
        }
    }
    else if(a=="black" and c=="black")
    {
        if(b=="YELLOW"){
            cout<<a<<endl;
            cout<<"YELLOW"<<endl;
            cout<<c<<endl;
        }
        else if(b=="yellow"){
            cout<<"red"<<endl;
            cout<<"black"<<endl;
            cout<<"black"<<endl;
        }else{
            cout<<"error";
        }
    }
    else if(c == "black" and b == "black")
    {
        if(a == "red"){
            cout<<"red"<<endl;
            cout<<"yellow"<<endl;
            cout<<c<<endl;
        }
        else{
            cout<<"error";
        }
    }
    else if(b == "yellow" and a == "red" and c == "black"){
        cout<<"black"<<endl;
        cout<<"black"<<endl;
        cout<<"green"<<endl;
    }
    else
    {
        cout<<"error";
    }
 
}
