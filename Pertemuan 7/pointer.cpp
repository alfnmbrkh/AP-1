#include<iostream>
using namespace std;

// inisialisasi fungsi penjumlahan
void penjumlahan(int a,int b){
    cout<<a+b<<endl;
}

// inisialisasi fungsi penjumlahan denga pointer
void penjumlahan_pointer(int *a,int *b){
    *a+=*b;//nilai yang ditunjuk pointer a diubah
    cout<<*a<<endl;
}

// inisialisasi fungsi mengalikan nilai dengan 2
void doubleValue(int *a){
    *a*=2;
    cout<<*a<<endl;
}

int main(){
    system("cls"); //clear screen
    
    //Deklarasi Pointer, pointer adalah variabel yang menyimpan alamat memori dari variabel lain
    int number=35;
    int *pointer_number=&number;

    // menampilkan isi dan alamat variabel number dan pointer
    // cout<<"Isi variabel number= "<<number<<endl;
    // cout<<"Alamat memori variabel number= "<<&number<<endl; //menampilkan alamat variabel
    // cout<<"Isi variabel pointer_number= "<<pointer_number<<endl; //menampilkan alamat variabel
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number= "<<*pointer_number<<endl; //menampilkan isi variabel yang di tunjuk pointer
    // cout<<"Alamat memori pointer_number= "<<&pointer_number<<endl; //menampilkan alamat pointer
    // cout<<endl;

    // Pointer Operation, mengubah isi variabel yang ditunjuk
    // *pointer_number=25; //mengganti isi variabel
    // cout<<"Isi variabel number= "<<number<<endl; //isi variabel diganti
    // cout<<"Alamat memori variabel number= "<<&number<<endl; //alamat tetap
    // cout<<"Isi variabel pointer_number= "<<pointer_number<<endl; //alamat tetap
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number= "<<*pointer_number<<endl; //isi variabel diganti
    // cout<<"Alamat memori pointer_number= "<<&pointer_number<<endl; //alamat tetap
    // cout<<endl;

    //Pointer in Array
    int num[]={1,2,3,4,5}; //array integer
    int *pointer_num=num; // menunjuk ke elemen array num
    
    // cout<<"Isi variabel num= "<<num[0]<<endl; 
    // cout<<"Alamat memori variabel num= "<<&num[3]<<endl; //alamat array indeks ke 3
    // cout<<"Isi variabel pointer_num= "<<pointer_num<<endl; //menampilkan alamat indeks ke 0
    // cout<<"Isi variabel yang ditunjuk oleh pointer_num= "<<*pointer_num<<endl; //isi indeks ke 0
    // cout<<"Alamat memori pointer_num= "<<&pointer_num<<endl; //alamat pointer
    // cout<<endl;

    // *pointer_num+=5; //nilai pointer diganti
    // cout<<"Isi variabel num= "<<num[0]<<endl; //nilai indeks ke 0 berubah, alamat tetap
    // cout<<"Alamat memori variabel num= "<<&num[3]<<endl;
    // cout<<"Isi variabel pointer_num= "<<pointer_num<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_num= "<<*pointer_num<<endl;
    // cout<<"Alamat memori pointer_num= "<<&pointer_num<<endl;
    // cout<<endl;

    //Pointer in Parameter
    // int num1=5;
    // int num2=7;
    // penjumlahan(num1,num2);. memanggil fungsi, nilai tidak berubah
    // cout<<num1<<endl;
    // cout<<num2<<endl;
    // penjumlahan_pointer(&num1,&num2);. memanggil fungsi dengan pointer
    // cout<<num1<<endl; //isi variabel diubah
    // cout<<num2<<endl;

    //Pointer in Pointer
    // int score=4;. inisialisasi score
    // int *pointer_score=&score;. pointer ke score
    // int **ptr_pointer_score=&pointer_score;. pointer ke pointer_score
    // cout<<"Isi variabel score= "<<score<<" dan alamat memorinya "<<&score<<endl;
    // cout<<"Isi variabel pointer_score "<<pointer_score<<" dan isi variabel yang ditunjuk oleh pointer score "<<*pointer_score<<" dan alamat memori pointer_score "<<&pointer_score<<endl;
    // cout<<"Isi variabel ptr_pointer_score "<<ptr_pointer_score<<" dan isi variabel yang ditunjuk oleh ptr_pointer_score "<<**ptr_pointer_score<<" dan alamat memori ptr_pointer_score "<<&ptr_pointer_score<<endl;
    // isi ptr_pointer_score=alamat pointer_score, isi variabel yg ditunjuk=isi score
  
    //Dynamic Pointer, membuat pointer baru tanpa variabel lain
    // int *ptr=new int;. alokasi memori untuk integer
    // *ptr=30; //memberikan nilai 30
    // cout<<"Isi variabel ptr "<<*ptr<<" dan alamat ptr "<<&ptr<<endl;
    
    // delete ptr;//deallocation memory
    // cout<<"Isi variabel ptr "<<*ptr<<" dan alamat ptr "<<&ptr<<endl; //*ptr berupa angka random, alamay tetap sama

    //Contoh
    // int n;
    // cout<<"Masukkan sebuah angka = ";
    // cin>>n;
    // doubleValue(&n);. memanggil fungsi untuk mengalikan nilai dengan 2
    // cout<<"Nilai angka setelah dikali 2 adalah "<<n;. menampilkan hasil
    
}