#include <iostream>

using namespace std;

int main(){
    float nilaiLulus = 30;
    float nilaiMtk, nilaiIpa, nilaiEng, totalNilai;

    cout << "============== PROGRAM KELULUSAN SISWA\n";
    cout << "Masukan nilai Matematika : ";
    cin >> nilaiMtk;
    cout << "Masukan nilai IPA : ";
    cin >> nilaiIpa;
    cout << "Masukan nilai Bahasa Inggris : ";
    cin >> nilaiEng;

    totalNilai = nilaiMtk + nilaiIpa + nilaiEng;

    if (totalNilai == nilaiLulus){
        cout << "Total Nilai anda adalah : " << totalNilai << endl; 
        cout << "Selamat anda LULUS dan mendapatkan predikat nilai A+, serta mendapat beasiswa gratis ke Jepang\n";
    } else if (totalNilai < nilaiLulus && totalNilai >= 27){
        cout << "Total Nilai anda adalah : " << totalNilai << endl; 
        cout << "Selamat anda LULUS dan mendapatkan predikat nilai A\n";
    } else if (totalNilai < nilaiLulus && totalNilai >= 24){
        cout << "Total Nilai anda adalah : " << totalNilai << endl; 
        cout << "Selamat anda LULUS dan mendapatkan predikat nilai B\n";
    } else if (totalNilai < nilaiLulus && totalNilai >= 21){
        cout << "Total Nilai anda adalah : " << totalNilai << endl; 
        cout << "Selamat anda LULUS dan mendapatkan predikat nilai C+\n";
    } else if (totalNilai < nilaiLulus && totalNilai >= 18){
        cout << "Total Nilai anda adalah : " << totalNilai << endl; 
        cout << "Selamat anda LULUS dan mendapatkan predikat nilai C\n";
    } else if (totalNilai < nilaiLulus && totalNilai >= 16){
        cout << "Total Nilai anda adalah : " << totalNilai << endl; 
        cout << "Selamat anda LULUS dan mendapatkan predikat nilai D\n";
    } else if (totalNilai > nilaiLulus){
        cout << "Total Nilai anda adalah : " << totalNilai << endl; 
        cout << "Maaf Nilai yang anda maskan SALAH, Mohon untuk Benar dan Jujur memasukan nilai ketiga mata pelajarannya\n";
    } else {
        cout << "Total Nilai anda adalah : " << totalNilai << endl; 
        cout << "Maaf anda TIDAK LULUS (GAGAL) Mohon untuk belajar lebih giat lagi\n";
    }

    cin.get();
    return 0;
}
