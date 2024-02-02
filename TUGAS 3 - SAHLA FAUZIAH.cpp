/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int pilihanTiket;
    int jumlahPesanan;
    double hargaSatuTiket;
    double totalPesanan;
    int total;
    int potongan;

    cout << "pilihan menu tiket:\n";
    cout << "1. Ekonomi (100ribu/tiket)\n";
    cout << "2. Bisnis (200ribu/tiket)\n";
    cout << "3. Eksekutif (300ribu/tiket)\n";
    
    cout << "masukkan pilihan pesanan tiket: ";
    cin >> pilihanTiket;

    cout << "masukkan jumlah yang dipesan: ";
    cin >> jumlahPesanan;

    switch (pilihanTiket) {
        case 1:
            hargaSatuTiket = 100000;
            break;
        case 2:
            hargaSatuTiket = 200000;
            break;
        case 3:
            hargaSatuTiket = 300000;
            break;
        default:
            cout << "tidak termasuk menu pilihan\n";
            return 1;
    }
    
    total = jumlahPesanan * hargaSatuTiket;

    if (total > 500000) {
       potongan= total * 0.9;  // Potongan 10%
    } else if (total > 300000) {
       potongan= total * 0.95;  // Potongan 5%
    } else if (total > 200000) {
        potongan= total * 0.98;  // Potongan 2%
    }

    cout << "total: " << jumlahPesanan * hargaSatuTiket << " ribu " << endl;
    cout << "Potongan: " << total-potongan << " ribu " << endl;
    cout << "Total pesanan yang harus dibayar: " << potongan << " ribu" << endl;
    
return 0;
}





