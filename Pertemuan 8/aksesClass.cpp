#include <iostream>
using namespace std; // agar tidak mengetik std lagi

// deklarasi class contohAkses
class ContohAkses {
    private:
        int privateVar; // Hanya bisa diaksess di dalam class itu sendiri

    protected:
        int protectedVar; // bisa diakses di dalam class dan class turunan

    public:
        int publicVar; // bisa di akses darimana saja
    
    // Constructor, otomatis dipanggil saat objek dibuat
    ContohAkses() {
        privateVar = 1; // inisialisasi variabel private
        protectedVar = 2; // inisialisasi variabel protected
        publicVar = 3; // inisialisasi variabel public
    }

    // fungsi untuk menampilkan semua anggota dari dalam class
    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl; // bisa di akses
        cout << protectedVar << endl; // bisa di akses
        cout << publicVar << endl; // bisa di akses
    }
};

// class turunan yang mewarisi contohAkses 
class Turunan : public ContohAkses {
    public: 
    void aksesProtected() {
        cout << protectedVar << endl; // bisa di akses
        cout << publicVar << endl; // bisa di akses
        cout << privateVar << endl; // tidak bisa di akses
    }
};

int main () {
    ContohAkses obj; // membuat objek dari class contohAkses
    obj.tampilkanSemua(); // memanggil fungsi yang menampilkan semua anggota class

    // cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl; // tidak bisa di akses
    // cout << obj.protectedVar << endl; // tidak bisa di akses
    // cout << obj.publicVar << endl; // bisa di akses

    cout << "\nAkses dari kelas turunan " << endl;
    Turunan tur; // membuat objek dari class turunan
    tur.aksesProtected(); //memanggil fungsi yang mengakses data dari class utama
}