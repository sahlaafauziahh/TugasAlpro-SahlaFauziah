/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void l_Persegi (){
    int sisi;
    float sum;
    cout << " LUAS PERSEGI " << endl;
    cout << " rumus = sisi * sisi" << endl;
    cout << " masukkan panjang sisi: ";
    cin >> sisi;
    cout << " hasilnya adalah: " << sisi * sisi << endl;
}

void l_Lingkaran (){
    int r;
    float phi=3.14, sum;
    cout << " LUAS LINGKARAN " << endl;
    cout << " rumus = phi * r^2 " << endl;
    cout << " phi = 3.14 " << endl;
    cout << " masukkan r: ";
    cin >> r;
    cout << " hasilnya adalah: " << phi * (r*r) << endl;
}

void l_Persegi_Panjang (){
    int panjang,lebar;
    float sum;
    cout << " LUAS PERSEGI PANJANG " << endl;
    cout << " rumus = panjang * lebar " << endl;
    cout << " masukkan panjang: ";
    cin >> panjang;
    cout << " masukkan lebar: ";
    cin >> lebar;
    cout << " hasilnya adalah: " << panjang * lebar << endl;
}

void menu () {
    int menu;  
    cout << "1. LUAS PERSEGI \n";
    cout << "2. LUAS LINGKARAN\n";
    cout << "3. LUAS PERSEGI PANJANG\n";
    cout << " \n pilih menu: ";
    cin >> menu;
    
    switch (menu) {
        case 1 : l_Persegi ();
        break;
        case 2 : l_Lingkaran ();
        break;
        case 3 : l_Persegi_Panjang ();
        break;
        default :
        cout << " Tidak Memenuhi Kriteria\n ";
        break;
    }
}
        
int main () {
    char ulang;
    do{
    menu ();
    cout << " \n Apakah Ingin Menghitung Ulang? (y/tdk): ";
    cin >> ulang;
} while (ulang=='y' || ulang=='Y');
}


