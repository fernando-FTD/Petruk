#include <iostream>
using namespace std;

template<class T>

class perhitungankabisat{
    private :
    T* tahun;

    public:
    perhitungankabisat(T* tahun): tahun(tahun){
    }

    //getter
    T* getTahun()const{
        return tahun;
    }

    //setter
    void setTahun(T* tahun){
        this->tahun = tahun;
    }

    bool HitungKabisat()const{
        if (*tahun % 4 == 0)
        {
            if (*tahun % 100 == 0)
            {
                if (*tahun % 400 == 0)
                {
                    return true;
                }else{
                    return false;
                }
                
            }else{
                return true;
            }
            
        }else{
            return false;
        }
        
    }
};

int main(){
    
    int tahun;
    cout << "Masukkan tahun : ";
    cin >> tahun;
    perhitungankabisat<int> Kabisat(&tahun);

    if (Kabisat.HitungKabisat())
    {
        cout << *Kabisat.getTahun() << " adalah tahun kabisat" << endl;
    }else{
        cout << *Kabisat.getTahun() << " bukan tahun kabisat" << endl;
    }
    

    return 0;
}