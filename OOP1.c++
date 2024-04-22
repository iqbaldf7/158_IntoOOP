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

class matakuliah{
    private:
        string kodeMk;
        string namaMk;
        int sks;
    public :
        void input(){
            cout << "Kode MK: ";
            cin >> kodeMk;
            cout << "Nama MK: ";
            cin >> namaMk;
            cout << "SKS: ";
            cin >> sks;
        }