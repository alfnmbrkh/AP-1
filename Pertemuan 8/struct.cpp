#include <iostream>
#include <string>
#include <vector> // untuk menggunakan vector
using namespace std; // agar tidak menggunakan std lagi

// deklarasi struct
struct Alamat {
    string jalan;
    string kota;
    int kodePos;
};

// deklarasi struct
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main() {
    system("CLS"); // clear screen
    Mahasiswa mhs1; // struct mahasiswa menjadi mhs1

    // contoh langsung ke nested struct
    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa; // membuat vector mahasiswa
    int n; // inisialisasi untuk menyimpan data
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n; // input jumlah mahasiswa

    // looping untuk menginput data sebanyak yang di inginkan user
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // menghapus karakter newline
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama); // input nama, menggunakan getline agar spasi dapat terbaca
        
        cout << "Masukkan umur : ";
        cin >> mhs1.umur; // input umur
   
        cout << "Masukkan IPK : ";
        cin >> mhs1.ipk; //input ipk

        mahasiswa.push_back(mhs1); // menambahkan data ke dalam vector
    }

    // menampilkan data yang telah dimasukkan
    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }

}