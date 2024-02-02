/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int pilihanKarakter, pilihanOpsi, Opsi, pilihanSenjata, Senjata, Total, totalHp, totalExp, totalCoin;
    string namaKarakter, namaSenjata, namaOpsi;
   
   int Coin = 100;
   int Hp = 100;
   int Exp = 100;
   
   cout << "SELAMAT DATANG DI GAME \n";
   
    cout << " Pilihan Karakter \n ";
    cout << " 1. Ksatria \n ";
    cout << " 2. Pemanah \n ";
    cout << " 3. Medis \n ";
    cout << " Masukkan Pilihan Karakter : ";
    cin >> pilihanKarakter;
    
    switch (pilihanKarakter) {
    case 1 : namaKarakter = "Ksatria";
        break;
    case 2 : namaKarakter = "Pemanah";
        break;
    case 3 : namaKarakter = "Medis";
        break;
    default :
        cout << " Pilihan Karakter Yang Anda Pilih Tidak Tersedia " << endl;
        break;
}
    cout << " Anda Memilih Karakter : " << namaKarakter << endl;
    cout << " Coin : " << Coin << endl;
    cout << " Hp : " << Hp << endl;
    cout << " Exp : " << Exp << endl;
    cout << " Senjata Yang Kamu Gunakan : - " << endl;
    
   while (true) {
        // pilihan opsi
    cout << " \nPilihan Opsi";
    cout << " \n1. Serang (Hp -10 Exp +10)";
    cout << " \n2. Pemulihan (Hp +10 Exp +5 Coin -15)";
    cout << " \n3. Beli Senjata ";
    cout << " \n0. Keluar ";
    cout << " \nMasukkan Pilihan Opsi : ";
    cin >> pilihanOpsi;
    
    switch (pilihanOpsi) {
    case 1 : 
    if (pilihanOpsi == 1){
        namaOpsi = "Serang";
        
        totalHp = 10;
        Hp -= totalHp;                           
        
        totalExp = 10;
        Exp += totalExp;
    }
    // Hasil Akhir
    cout << " Hp : " << Hp << endl;
    cout << " Exp : " << Exp << endl;
    cout << " Coin : " << Coin << endl;
    cout << " Senjata : " << namaSenjata << endl;
cout << " Kamu Melakukan " << namaOpsi << " Terhadap Lawan " << " Dengan Senjata " << namaSenjata << endl;
    break;
    
    case 2 :
    if (pilihanOpsi == 2){
        namaOpsi = "Pemulihan";
        
        totalHp = 10;
        Hp += totalHp;
        
        totalExp = 5;
        Exp += totalExp;
        
        totalCoin = 15;
        Coin -= totalCoin;
    }
    
    // Hasil Akhir
    cout << " Hp : " << Hp << endl;
    cout << " Exp : " << Exp << endl;
    cout << " Coin : " << Coin << endl;
    cout << " Senjata : " << namaSenjata << endl;
    cout << " Kamu Melakukan " << namaOpsi << endl;
    break;
    
    case 3 : " Pilihan Senjata ()";
    int pilihanSenjata;
    cout << "\n1. Panah " << endl;
    cout << "\n2. Pedang " << endl;
    cout << "\nMasukkan Senjata Yang Dipilih : " << endl;
    cin >> pilihanSenjata;
    
if (pilihanSenjata == 1){
    namaSenjata = " Panah ";
    Total += 25;
}else if (pilihanSenjata == 2){
    namaSenjata = " Pedang ";
    Total += 50;
}

if (Coin >= Total){
    cout << " Kamu Berhasil Membeli Senjata " << namaSenjata << " Dengan Total " << Total << " Coin " << endl;
    Coin -= Total;
 } else { 
     cout << " Maaf Coin Yang Anda Punya Tidak Mencukupi Untuk Pembelian Senjata " << endl;
 }
    
    // Hasil Akhir
    cout << " Hp : " << Hp << endl;
    cout << " Exp : " << Exp << endl;
    cout << " Coin : " << Coin << endl;
    cout << " Senjata : " << namaSenjata << endl;
    cout << " Kamu Menggunakan Senjata : " << namaSenjata << endl;
    break;
    
    case 0:
        cout << " Kamu Keluar Dari Game " << endl;
    return 0;
    default :
        cout << " Pilihan Opsi Yang Anda Pilih Tidak Tersedia " << endl;
        break;

    return 0;
}
}
}





