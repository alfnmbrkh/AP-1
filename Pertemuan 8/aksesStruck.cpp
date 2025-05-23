#include <iostream>
#include <string>
using namespace std; // agar tidak perlu mengetik std

// deklarasi struct
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    Mahasiswa mhs1; // variabel mhs1 dari tipe struct mahasiswa

    // mengisi data ke dalam struct
    mhs1.nama = "Alfin";
    mhs1.umur = 20;
    mhs1.ipk = 4.00;

    // contoh akses langsung menggunakan titik
    // cout << "Akses dengan . : " << endl;
    // cout << "Nama : " << mhs1.nama << endl;
    // cout << "Umur : " << mhs1.umur << endl;
    // cout << "IPK : " << mhs1.ipk << endl;

    // membuat pointer ptrMhs yang menunjukkan ke alamat mhs1
    Mahasiswa *ptrMhs = &mhs1;

    // mengakses data menggunakan pointer dengan tanda panah
    cout << "Akses dengan -> : " << endl;
    cout << "Nama : " << ptrMhs->nama << endl;
    cout << "Umur : " << ptrMhs->umur << endl;
    cout << "IPK : " << ptrMhs->ipk << endl;


}