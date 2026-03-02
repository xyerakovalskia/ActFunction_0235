#include <iostream>
using namespace std;

float d1, d2, luas;

void input(){
    cout << "Masukkan Diagonal 1 : ";
    cin >> d1;
    cout << "Masukkan Diagonal 2 : ";
    cin >> d2;
}

float LuasBelahKetupat(float d1, float d2){
    return 0.5 * d1 * d2;
}

void output(){
    cout << "LuasKetupat :" << LuasBelahKetupat(d1,d2);
}

int main(){
    input();
    output();
}