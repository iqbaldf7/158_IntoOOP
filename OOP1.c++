#include <iostream>
using namespace std;

class Mahasiswa{
    public: // akses modifier
        string nama;
        string umur;
        string jurusan;

        void output(){
            cout << "Nama: " << nama << endl;
            cout << "umur: " << umur << endl;
            cout << "jurusan: " << jurusan << endl;
        }
};