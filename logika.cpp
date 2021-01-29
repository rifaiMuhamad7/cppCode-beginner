#include <iostream>

using namespace std;

int main(){
    cout << "Operator Logika \n";
    // and, or , not
    
    int a = 1;
    int b = 2;

    bool hasil;


    // and (kedua nilai harus true untuk menghasilkan nilai true/1)
    cout << "and\n";  
    hasil = (a == 1) and (b == 2);
    cout << hasil << endl;
    hasil = (a == 1) and (b == 3);
    cout << hasil << endl;
    hasil = (a == 4) && (b == 2);
    cout << hasil << endl;
    hasil = (a == 5) && (b == 4);
    cout << hasil << endl;
    cout << "\n";  

    // or (salah satu saja true maka hasilnya akan true)
    cout << "or\n";  
    hasil = (a == 1) or (b == 2);
    cout << hasil << endl;
    hasil = (a == 1) or (b == 3);
    cout << hasil << endl;
    hasil = (a == 4) or (b == 2);
    cout << hasil << endl;
    hasil = (a == 5) or (b == 4);
    cout << hasil << endl;
    cout << "\n";

    // not
    cout << "not\n";
    int c = 6;
    cout << !(c == b) << endl;


    cin.get();
    return 0;

}
