#include <iostream>
using namespace std;

string namaGlobal="Ilmu"; //variabel global

void namaVariabel (){
    string namaLokal="Komputer"; //variabel lokal
    //coba akses
    cout<<namaLokal<<endl;
    cout<<namaGlobal<<endl;
}

int main(){
    namaVariabel();

    //coba akses
    cout<<namaGlobal<<endl;

    //coba akses
    //cout<<namaLokal;//ga bisa
}