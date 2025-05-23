#include <iostream>
using namespace std;

int main() {
    //deklarasi variabel
    string kalimat;
    int i;

    cout << "Masukkan kalimat : "; //input kalimat
    getline(cin, kalimat); //menerima input, menggunakan getline agar spasi terbaca

    // alya
    for(i = 0; i < kalimat.length(); i++) { // jika i<kalimat.length() masih terpenuhi akan dijalankan
        kalimat[i] = toupper(kalimat[i]); //semua kalimat akan di kapitalkan
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl; //tampilkan kalimat yang sepenuhnya dalam kapital
    
    return 0;
}
