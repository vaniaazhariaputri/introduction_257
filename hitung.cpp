#include <iostream>

using namespace std;

int main ()
{//begin
    //numeric nPanjang, nLebar, nLuas
    float Panjang, Lebar, Luas;
    //display 'Masukkan panjangnya = '
    cout << "Masukkan panjangnya = ";
    //accept nPanjang 
    cin >> Panjang;
    //display 'Masukkan lebarnya = '
    cout << "Masukkan Lebarnya = ";
    //accept nLebar
    cin >> Lebar;
    //computs nLuas = nPanjang * nLebar
    Luas = Panjang * Lebar;
    //display 'Luas persegi panjang = ' + nLuas
    cout << "Luas persegi panjang = " << Luas;
}//end
