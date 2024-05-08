#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    
    int N;
    string kata;
    unsigned int angka;
    cin >> N;
    
    stack<int> tes;
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
    
    stack<int> hasil = tes;
    while(!hasil.empty()){
        cout << hasil.top() << " ";
        hasil.pop();
    }
    cout << endl;
}
    return 0;
}