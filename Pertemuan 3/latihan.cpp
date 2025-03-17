#include <iostream>
using namespace std;

int main() {
    int bilangan;

    // Meminta input dari pengguna
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    // Menentukan apakah bilangan merupakan kelipatan 5 atau 10
    if (bilangan % 10 == 0) {
        cout << bilangan << " adalah kelipatan dari 10." << endl;
    } else if (bilangan % 5 == 0) {
        cout << bilangan << " adalah kelipatan dari 5." << endl;
    } else {
        cout << bilangan << " bukan kelipatan dari 5 atau 10." << endl;
    }

    return 0;
}