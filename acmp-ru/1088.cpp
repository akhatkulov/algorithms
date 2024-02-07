#include <iostream>
#include <cmath>
using namespace std;
     
int main()
{
    char x1, x2, y1, y2;
    int a, b, a1, b1;
    cin>>x1>>y1;
    cin>>x2>>y2;
    a = x1 - 'A'+1; b=y1-'0';
    a1 = x2 -'A'+1; b1 = y2-'0';
    cerr<<"test"<<b<<" "<<b1<<endl;
    int k = 0;
    if(pow(a1-a,2)+pow(b1-b,2)==1 || pow(a1-a,2)+pow(b1-b,2)==2){
        cout<<"King"<<endl;k++;
    }
    if((a-a1==0 || b-b1 == 0) || (a1-a==b1-b || a1 - a == -(b1-b))){
        cout<<"Queen"<<endl;k++;
    }
    if(pow(a1-a,2)+pow(b1-b,2)==5){
        cout<<"Knight"<<endl;k++;
    }
    if(a1-a==b1-b || a1-a == -(b1-b)){
        cout<<"Bishop"<<endl;k++;
    }
    if(a-a1==0 || b-b1 == 0){
        cout<<"Rook"<<endl;k++;
    }
    if((a==a1) && ((b==2 && b1-b==2) || (b>1 && b1-b==1))){
        cout<<"Pawn"<<endl;k++;
    }
    if(k==0){
        cout<<"Nobody"<<endl;
    }
     
}
