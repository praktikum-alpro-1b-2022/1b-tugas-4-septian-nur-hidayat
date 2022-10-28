#include <iostream>
#include <string>

using namespace std;

int main(){
    unsigned int angka;
    string bar, desk;

    desk = "    Menu Restaurant Mc'Yahud\n"
    "================================================\n"
    "1. Nasi Goreng Informatika     Rp.5000,-\n"
    "2. Nasi Soto Ayam Internet     Rp.7000,-\n"
    "3. Gado-gado Disket            Rp.4500,-\n"
    "4. Bubur Ayam LAN              Rp.4000,-\n"
    "================================================\n\n";

    cout << desk;
    cout << "Masukkan Pilihan Anda... :";
    cin >> angka;

    switch(angka){
    case 1:
        cout << "Pilihan No. 1 Nasi Goreng Informatika Rp.5000,-\n";
        break;
    case 2:
        cout << "Pilihan No. 2 Nasi Soto Ayam Internet Rp.7000,-\n";
        break;
    case 3:
        cout << "Pilihan No. 3 Gado-gado Disket Rp.4500,-\n";
        break;
    case 4:
        cout << "Pilihan No. 4 Bubur Ayam LAN Rp.4000,-\n";
        break;
    default:
        cout << "Harus memilih nomor dari list di atas";
        break;
    }
    return 0;
}
