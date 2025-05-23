#include<iostream>
using namespace std;

int main(){
    float volume, lp; // deklarast variabel
    int r;
    const float pi =3.14; // deklarasi konstanta
    cout<<"Masukkan radius : ";
    cin>>r; // input r

    volume=(float)4/(float)3*pi*r*r*r;// hitung volume
    lp=4*pi*r*r; //hitung lp

    cout<<volume<<endl; //tampilkan volume
    cout<<lp<<endl; //tampilkan lp

}
