#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    
    int N;
    string kata;
    unsigned int angka;
    cin >> N;
    
    queue<int> tes;
    for(int i = 0; i<N; i++){
        cin >> kata;
        if(kata == "push"){
            cin >> angka;
            tes.push(angka);
        }else if(kata == "pop"){
            if(!tes.empty()){
                tes.pop();
            }
        }
        
        queue<int> hasil = tes;
        while(!hasil.empty()){
        cout << hasil.front() << " ";
        hasil.pop();
        }
    cout << endl;
    }
    
    
    return 0;
}