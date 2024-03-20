#include <iostream>
using namespace std;

class mahasiswa{
    private:
        string nama,npm;

    public:
        void setNama(string nama){
            this->nama = nama;
        }

        string getNama(){
            return nama;
        }
};

int main(){

    mahasiswa mhs;

    mhs.setNama("fernando");

    cout << "Nama : " << mhs.getNama() << endl;

    return 0;
}