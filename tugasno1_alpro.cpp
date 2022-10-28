#include <iostream>
using namespace std;

int main(){
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    // Modulus = jumlah bagi
    // Logic: jika angka tsb habis di bagi 2, maka ia genap
    // Jika tidak, maka ganjil
    if(angka % 2 == 0 ){
        cout << "Angka genap";
    }else{
        cout << "Angka ganjil";
    }
    return 0;
}
