#include <iostream>
#include <string>
using namespace std;

int main(){
    string user, pass, userName, passWord;
    user = "septian";
    pass = "septian123";

    cout << "Masukkan Username: ";
    cin >> userName;

    cout << "Masukkan Password: ";
    cin >> passWord;

    if(userName == user){
        if(passWord == pass){
            cout << "Username dan password sesuai, Login berhasil";
        }else{
            if(userName == user){
                cout << "Username sesuai, password tidak sesuai!";
            }else{
                cout << "Username dan password tidak sesuai!";
            }
        }
    }else{
        if(passWord == pass){
            cout << "Username tidak sesuai, password sesuai!";
        }else{
            cout << "Username dan password tidak sesuai!";
        }
    }

    return 0;
}
