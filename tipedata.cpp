#include <iostream>
#include <limits>

using namespace std;

int main(){
    cout << "=== Tipe data ===" << endl;
    cout << "\n";

    cout << "-----------------------1.Tipe data integer(32bit)\n";
    int angka;

    cout << "Silahkan masukan angka bilangan bulat: ";
    cin >> angka;
    cout << "Angka  yang anda masukan adalah " << angka << endl;
    cout << "Ukuran memori " << angka << " dengan tipe data integer adalah " << sizeof(angka) << " byte" << endl;
    cout << "Nilai maximal tipe data integer adalah " << numeric_limits<int>::max() << endl;
    cout << "Nilai minimal tipe data integer adalah " << numeric_limits<int>::min() << endl;
    cout << "\n";

    cout << "-----------------------2.Tipe data Long(64bit)\n";
    long b = 3;

    cout << "ukuran memori tipe data long adalah " << sizeof(b) << " byte\n";
    cout << "Nilai maximal tipe data long adalah " << numeric_limits<long>::max() << endl;
    cout << "Nilai minimal tipe data long adalah " << numeric_limits<long>::min() << endl;
    cout << "\n";
    
    cout << "-----------------------3.Tipe data short(16bit)\n";
    short c = 5;

    cout << "ukuran memori tipe data short adalah " << sizeof(c) << " byte\n";
    cout << "Nilai maximal tipe data short adalah " << numeric_limits<short>::max() << endl;
    cout << "Nilai minimal tipe data short adalah " << numeric_limits<short>::min() << endl;
    cout << "\n";

    cout << "-----------------------4.Tipe data float(16bit)\n";
    short d = 6.75;

    cout << "ukuran memori tipe data short adalah " << sizeof(d) << " byte\n";
    cout << "Nilai maximal tipe data short adalah " << numeric_limits<short>::max() << endl;
    cout << "Nilai minimal tipe data short adalah " << numeric_limits<short>::min() << endl;
    cout << "\n";

    cout << "-----------------------5.Tipe data double(64bit)\n";
    double e = 15.55;

    cout << "ukuran memori tipe data double adalah " << sizeof(e) << " byte\n";
    cout << "Nilai maximal tipe data double adalah " << numeric_limits<double>::max() << endl;
    cout << "Nilai minimal tipe data double adalah " << numeric_limits<double>::min() << endl;
    cout << "\n";

    cout << "-----------------------6.Tipe data character(8bit)\n";
    char golonganDarah = 'A';

    cout << "ukuran memori tipe data character adalah " << sizeof(golonganDarah) << " byte\n";
    cout << "Nilai maximal tipe data character adalah " << numeric_limits<char>::max() << endl;
    cout << "Nilai minimal tipe data character adalah " << numeric_limits<char>::min() << endl;
    cout << "\n";

    cout << "-----------------------7.Tipe data boolean(1bit)\n";
    bool g = true;
    bool h = false;

    cout << "ukuran memori tipe data boolean adalah " << sizeof(g) << " byte\n";
    cout << g << endl;
    cout << h << endl;
    cout << "\n";

    cout << "-----------------------8.Unsigned (tidak ada nilai minus)integer\n";
    unsigned int z = 1;
    cout << "Nilai tipe data unsigned integer adalah" << z << endl;
    cout << "Nilai maximal tipe data unsigned integer adalah " << numeric_limits<unsigned int>::max() << endl;
    cout << "Nilai minimal tipe data Unsigned integer  adalah " << numeric_limits<unsigned int>::min() << endl;
    
    cin.get();
    return 0;
}
