#include <iostream>
using namespace std;

class mahasiswa{
    public:
        string nama,npm;

    mahasiswa(string nama, string x){
        this->nama = nama;
        this->npm = x;
    }
};

int main(){

    mahasiswa mhs("fernando", "2317051060");

    cout << mhs.nama << " " << mhs.npm;

    return 0;
}