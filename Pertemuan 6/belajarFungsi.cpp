#include <iostream> 
using namespace std; 
//inisialisasi fungsi sapa dan memakai parameter formal
void sapa(string nama){
    cout<<"Halo "<<nama<<"! Selamat belajar CIPUPUS"<<endl;
}

int main(){
    string nama="IKI";
    //output fungsi tersebut, memakai parameter aktual
    sapa(nama);
}