#include <iostream>
using namespace std;

int main() {
    float luas, volume, diameter, jari, sisi;
    const float phi = 3.14;

    cout << "Masukkan sisi : ";
    cin >> sisi;

    cout << "Masukkan jari : ";
    cin >> jari;

    cout << "Masukkan sisi : ";
    cin >> sisi;

    luas = 4 * phi * jari * jari;
    volume = (4/3) * phi * jari * jari * jari;
    cout << "Luas = " << luas << endl;
    cout << "Luas = " << volume << endl;

}