#include <iostream>

using namespace std;

int main(){

    cout << "===== Deklarasi & Input User  =====" <<  endl;
    int a; // Deklarasi
    float b;

    cout << "Silahkan masukan bilangan bulat = ";
    cin >> a; // mengambil nilai dari console yang dimasukan ke variabel a.
    cout << "Angka yang anda masukan adalah "
    << a << endl;

    cout << "Silahkan masukan bilangan berkoma = ";
    cin >> b; // mengambil nilai dari console yang dimasukan ke variabel b.
    cout << "Angka yang anda masukan adalah "
    << b << endl;

    cin.get();
    return 0;
}
