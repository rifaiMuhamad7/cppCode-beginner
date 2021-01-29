#include <iostream>

using namespace std;

int main(){
    cout << "==== If Statement ====\n";
    int angka1;

    cout << "Silahkan masukan usia anda sekarang : ";
    cin >> angka1;
    
    if (angka1 >= 17){
        cout << "Anda bisa membuat KTP Elektrik, karena usia anda memenuhi persyaratan\n";
    } else {
        cout << "Maaf usia anda belum memenuhi persyaratan untuk membuat KTP Elektrik\n";

    }

    cin.get();
    return 0;
}
