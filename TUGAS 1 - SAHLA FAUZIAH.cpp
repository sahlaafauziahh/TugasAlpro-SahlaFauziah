/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int bilanganGanjil;
    int bilanganGenap;
    
    
    cout << " masukkan bilangan ganjil ";
    cin >> bilanganGanjil;
    
    cout << " masukkan bilangan genap ";
    cin >> bilanganGenap;

    if(bilanganGanjil % 2 == 1 && bilanganGenap % 2 == 0){
        cout << bilanganGanjil << " bilangan ganjil " << endl;
        cout << bilanganGenap << " bilangan genap " << endl;
    } else {
        cout << "Maaf tidak memenuhi kriteria" << endl;
    }

    return 0;
}







