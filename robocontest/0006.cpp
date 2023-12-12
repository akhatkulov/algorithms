/*Dasturchilar kuni
Dasturchilar kuni yilning 255-kunida nishonlanadi(bunda 1 - yanvar nolinchi kun deb hisoblanadi). Berilgan yildagi dasturchilar kuni sanasini aniqlaydigan dastur yozishingiz kerak.

Grigorian taqvimida kabisa yili hisoblanadi:
 

yil raqami 400 ga bo'linadigan yil
yil raqami 4 ga bo'linadigan, ammo, 100 ga bo'linmaydigan yil*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long a;
    cin>>a;
    
    if(a%400==0){
        cout<<13<<setw(2)<<setfill(0)<<9<<setw(4)<<right<<a;
    }else if(a%4==0 and a%100!=0){
        cout<<13<<setw(2)<<setfill(0)<<9<<setw(4)<<right<<a;
    }else{
       cout<<13<<setw(2)<<setfill(0)<<9<<setw(4)<<right<<a;
    }
}