#include <iostream>

using namespace std;

int main(){
    cout << "===== Operator Komparasi (perbandingan)\n";
    int jmlKeyboard = 5;
    int jmlMonitor = 7;
    int jmlMouse = 5;
    int jmlPrinter = 7;

    //equal then(sama dengan)\n";
    cout << (jmlKeyboard == jmlMonitor) << endl;

    //not equal then (tidak sama dengan)\n";
    cout << (jmlKeyboard != jmlMonitor) << endl;

    //greater then (lebih besar dari)\n";
    cout << (jmlMouse > jmlKeyboard) << endl;

    //smaller then (lebih kecil dari)\n";
    cout << (jmlKeyboard < jmlMonitor) << endl;

    //greater then equal (lebih besar sama dengan)\n";
    cout << (jmlMouse <= jmlMonitor) << endl;

    //smaller then equal (lebih kecil sama dengan)\n";
    cout << (jmlPrinter <= jmlMonitor) << endl;

    cin.get();
    return 0;
}
