#include <iostream>

using namespace std;

int main(){
    cout << "====== Operator Aritmatika ========" << endl;
    // +,-,*,/,%

    int panjang = 45;
    int lebar = 30;
    int hasil;

    // Penjumlahan
    hasil = panjang + lebar;
    cout << panjang << " + " << lebar << " = " << hasil << endl;
    cout << "\n";

    // Pengurangan
    hasil = panjang - lebar;
    cout << panjang << " - " << lebar << " = " << hasil << endl;
    cout << "\n";

    // Perkalian
    hasil = panjang * lebar;
    cout << panjang << " * " << lebar << " = " << hasil << endl;
    cout << "\n";

    // Pembagian
    int tinggi = 9;
    float panjang1 = 13;

    float hasil1;

    hasil1 = panjang1 / tinggi;
    cout << panjang1 << " / " << tinggi << " = " << hasil1 << endl;
    cout << "\n";

    // Modulus
    hasil = panjang % lebar;
    cout << panjang << " % " << lebar << " = " << hasil << endl;
    cout << "\n";

    cout << "Urutan Eksekusi operator aritmatika \n";

    int sisi = 56;
    int luas = 90;
    int keliing = 34;

    int total;

    total = (luas + keliing) * sisi;
    cout << total << endl;

    cin.get();
    return 0;

}
