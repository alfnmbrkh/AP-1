#include<iostream>
using namespace std;

int main(){
    int nilai;

    system("CLS");

    cout<<"Masukkan nilai : ";
    cin>>nilai;

    //if statement, digunakan untuk mengambil keputusan berdasarkan suatu kondisi di dalam ()
    /*if(nilai<=65){
        cout<<"Anda tidak lulus"<<endl;
    }*/

    //if-else statement, digunakan jika ingin menjalankan suatu program jika statement if tidak terpenuhi
    /*if(nilai<=65){
        cout<<"Anda tidak lulus"<<endl;
    } else{
        cout<<"Anda lulus!"<<endl;
    }*/

    //if-else-if statement, digunakan untuk banyak kondisi
    /*if (nilai==100){
        cout<<"Anda Keceh"<<endl;
    } else if (nilai<=65){
        cout<<"Anda tidak lulus"<<endl;
    } else{
        cout<<"Anda lulus"<<endl;
    }*/

    //nested if, if statement di dalam if statement
    /*if (nilai<=65){
        cout<<"Anda tidak lulus"<<endl;
    } else {
        if (nilai==100){
            cout<<"Anda lulus dan anda keceh"<<endl;
        } else{
            cout<<"Anda Lulus"<<endl;
        }

    }*/

    //Switch case, menjalankan 1 pernyataan dari beberapa kemungkinan pernyataan berdasarkan nilai
    /*switch(nilai){
        case 1:
            cout<<"Senin"<<endl;
            break; // digunakan sebagai pemisah dalam case
        case 2:
            cout<<"Selasa"<<endl;
            break;
        case 3:
            cout<<"Rabu"<<endl;
            break;
        case 4:
            cout<<"Kamis"<<endl;
            break;
        case 5:
            cout<<"Jumat"<<endl;
            break;
        case 6:
            cout<<"Sabtu"<<endl;
            break;
        case 7:
            cout<<"Minggu"<<endl;
            break;
        default:
            cout<<"Inputan tidak valid"<<endl;
            break;
    }*/

    //switch range, menjalankan 1 pernyataan dari beberapa kemungkinan pernyataan berdasarkan jangkauan suatu nilai
    /*switch (nilai){
        case 85 ... 100 : cout<<"A"<<endl; break; 
        case 80 ... 84 : cout<<"B+"<<endl; break; 
        case 75 ... 79 : cout<<"B"<<endl; break; 
        case 70 ... 74 : cout<<"C+"<<endl; break; 
        case 65 ... 69 : cout<<"C"<<endl; break; 
        case 60 ... 64 : cout<<"D"<<endl; break; 
        default:cout<<"E"<<endl; break;
    }*/

    //Ternary Operator, operator yang menjalankan operasi kondisi dengan bentuk (kondisi) ? (hasil1) : (hasil2) dimana akan menjalankan hasil 1 jika benar dan hasil 2 jika salah 
    /*if(nilai%2==0){
        cout<<"Genap"<<endl;
    } else {
        cout<<"Ganjil"<<endl;
    }*/

    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout<<nilai<<" tuh bilangan "<<checkNum<<" sih"<<endl;
}
