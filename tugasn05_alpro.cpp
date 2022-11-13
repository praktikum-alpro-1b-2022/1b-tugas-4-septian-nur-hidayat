#include <iostream>
#include <string>
using namespace std;

int main(){
    string desk, ukuran;
    int kodeSusu, jumlah;

    //Array Section here
    string namaProduk[3] = {"Dancow", "Indomilk", "Sustacal"};
//  string ukuranProduk[3] = {"B", "S", "K"};
    int harga[3][3] = {{10000, 4250, 2100}, {8500, 4000, 2025},{17000, 14000, 8300}};


    desk =
    "+--------------+---------------+-----------+---------------+\n"
    "| Kode Susu    | Nama Produk   | Ukuran    | Harga         |\n"
    "+--------------+---------------+-----------+---------------+\n"
    "|              |               | B = Besar | Rp.10.000,-   |\n"
    "|      1       |   Dancow      | S = Sedang| Rp.4.250,-    |\n"
    "|              |               | K = Kecil | Rp.2.100,-    |\n"
    "+--------------+---------------+-----------+---------------+\n"
    "|              |               | B = Besar | Rp.8.500,-    |\n"
    "|      2       |   Indomilk    | S = Sedang| Rp.4.000,-    |\n"
    "|              |               | K = Kecil | Rp.2.025,-    |\n"
    "+--------------+---------------+-----------+---------------+\n"
    "|              |               | B = Besar | Rp.17.000,-   |\n"
    "|      3       |   Sustacal    | S = Sedang| Rp.14.000,-   |\n"
    "|              |               | K = Kecil | Rp.8.300,-    |\n"
    "+--------------+---------------+-----------+---------------+\n\n";
    cout << desk;

    cout << "Masukkan Kode Susu (1-3): ";
    cin >> kodeSusu;

    cout << "Masukkan Jumlah Pembelian: ";
    cin >> jumlah;

    cout << "Masukkan Ukuran (B/S/K): ";
    cin >> ukuran;

    if(kodeSusu == 1){
        if(ukuran == "B"){
            cout << "\nSusu " << namaProduk[0] << endl;
            cout << "Harga Susu Rp. " << harga[0][0] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[0][0]*jumlah << ".00" << endl;
        } else if(ukuran == "S"){
            cout << "\nSusu " << namaProduk[0] << endl;
            cout << "Harga Susu Rp. " << harga[0][1] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[0][1]*jumlah << ".00" << endl;
        } else if(ukuran == "K"){
            cout << "\nSusu " << namaProduk[0] << endl;
            cout << "Harga Susu Rp. " << harga[0][2] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[0][2]*jumlah << ".00" << endl;
        }
    } else if(kodeSusu == 2){
        if(ukuran == "B"){
            cout << "\nSusu " << namaProduk[1] << endl;
            cout << "Harga Susu Rp. " << harga[1][0] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[1][0]*jumlah << ".00" << endl;
        } else if(ukuran == "S"){
            cout << "\nSusu " << namaProduk[1] << endl;
            cout << "Harga Susu Rp. " << harga[1][1] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[1][1]*jumlah << ".00" << endl;
        } else if(ukuran == "K"){
            cout << "\nSusu " << namaProduk[1] << endl;
            cout << "Harga Susu Rp. " << harga[1][2] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[1][2]*jumlah << ".00" << endl;
        }
    } else if(kodeSusu == 3){
        if(ukuran == "B"){
            cout << "\nSusu " << namaProduk[2] << endl;
            cout << "Harga Susu Rp. " << harga[2][0] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[2][0]*jumlah << ".00" << endl;
        } else if(ukuran == "S"){
            cout << "\nSusu " << namaProduk[2] << endl;
            cout << "Harga Susu Rp. " << harga[2][1] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[2][1]*jumlah << ".00" << endl;
        } else if(ukuran == "K"){
            cout << "\nSusu " << namaProduk[2] << endl;
            cout << "Harga Susu Rp. " << harga[2][2] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[2][2]*jumlah << ".00" << endl;
        }
    } else {
        cout << "\nPilihan tidak ada dalam list";
    }

    return 0;
}
