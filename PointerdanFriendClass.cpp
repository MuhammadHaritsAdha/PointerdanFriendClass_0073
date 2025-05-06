#include <iostream>
using namespace std;

class PersegiPanjang
{
    public : // akses modifier
        int panjang, lebar;

    public : 

        void input()
        {
            cout << "Masukkan Panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar;
        }

}