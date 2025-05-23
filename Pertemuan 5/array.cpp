#include <iostream> 
#include <string>
#include <array>
using namespace std;

int main(){
    // ada 2 cara membuat array
    // string nama[5];

    // cara pertama:
    // nama[0] = "Alfin";
    // nama[1] = "Imam";
    // nama[2] = "Syahid";
    // nama[3] = "Monthe";
    // nama[4] = "Nopal";

    // cara kedua:
    // string nama[5] = {"Alfin", "Imam", "Syahid", "Monthe", "Nopal"};

    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;
    
    //Menampilkan semua isi string menggunakan increment
    // for (int i=0;i<5;i++){
    //     cout<<nama[i]<<endl;
    // }

    //Menampilkan semua isi string meggunakan decrement
    // for (int i=4;i>=0;i--){
    //     cout<<nama[i]<<endl;
    // }

    // Multidimensional array:
    // int matrix[2][3]={{1,3,5},{2,4,6}};

    //Menampilkan Matrix 3x2
    // for (int i=0;i<2;i++){
    //     for (int j=0;j<3;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //Menampilkan Matrix 6x4
    // int matrix[4][6]={{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6}};
    // for (int i=0;i<4;i++){
    //     for (int j=0;j<6;j++){
    //         cout<<matrix[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }
    
    // Menampilkan string menggunakan index dan memisahkan string nya
    // string nama = "Sauqy";
    // for (int i=0;i<nama.length;i++){
    //     cout<<nama[i]<<endl;
    // }

    // string s1 = "awooo";
    // string s2 = "uwooo";
    // Menambah 2 string dan menghitung panjang nya
    // cout<<(s1 + s2).length()<<endl;

    // substring
    // cout<<(s1 + s2).substr(0,2)<<endl; // ambil substring dari indeks ke 0 sepanjang 2 karakter

    // Operator sizeof()
    // int angka=10;

    // cout<<sizeof(angka)<<endl;

    // int nilai[]={10,20,30,40,50};
    // cout<<sizeof(nilai)<<endl; //untuk menghitung size dari nilai dalam bentuk byte

    // string n = "Alfin";
    // cout<<sizeof(n)<<endl;
    
    // int n;
    // string nama_karyawan[] = {"Alfin", "Imam", "Syahid", "Monthe", "Nopal"};
    // n = sizeof(nama_karyawan)/sizeof(string); //untuk mengetahui berapa buah elemen didalam array tersebut
    // cout<<n<<endl;

    // array library
    array<float,5> nilai = {87.5,90,100,95.7,78.5};
    cout<<"Nilai: ";
    // for (int i=0;i,nilai.size();i++){
    //     cout<<nilai[i]<<" ";
    // }
    
    //menampilkan isi dari array
    for (float n : nilai){
        cout<<n<<endl;
    }


}   