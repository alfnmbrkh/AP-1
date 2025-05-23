#include <iostream>
using namespace std;

int main() {
    system("cls"); //clear screen
    //deklarasi variabel
    string kalimat;
    cout << "Masukkan kalimat: "; getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) { // jika i<kalimat.length() masih terpenuhi akan dijalankan
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u'){ // jika terdapat char di kalimat yang berupa a,i,u,e,o
            kalimat[i] = toupper(kalimat[i]); //kalimat akan dikapitalkan
        }
    }
    cout << "Kalimat hasil konversi: " << kalimat << endl;
}
