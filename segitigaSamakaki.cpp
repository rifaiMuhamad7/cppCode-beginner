#include <iostream>

using namespace std;

int main(){
    int n; 
    cout << "Silahkan masukan jumlah baris : ";
    cin >> n;

    cout << "---- Pola 1\n";
    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i)-1; k++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    

    int baris;
    cout << "Silahkan masukan jumlah baris : ";
    cin >> baris;

    cout << "---- Pola 2\n";
    for(int i = 1; i <= baris; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = baris; k >= (2*i)-baris; k--){
            // rumus deret adalah kuncinya
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;


    int brs; 
    cout << "Silahkan masukan jumlah baris : ";
    cin >> brs;

    cout << "---- Pola 3\n";
    for(int i = 1; i <= brs; i++){
        for(int j = brs; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i)-1; k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 2; i <= brs; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = brs; k >= (2*i)-brs; k--){
            cout << "*";
        }
        cout << endl;
    }
    
    
    cin.get();
    return 0;
}
