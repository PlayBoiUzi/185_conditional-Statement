#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurinput(){
    cout << "Masukkan nilai alas = ";
    cin >> alas;
    cout << "Masukkan nilai tinggi = ";
    cin >> tinggi;

}

void prosedurhitungluas(){
    luas = 0.5 * alas * tinggi;

}

void proseduroutput(){
    cout << "Luas segitiga = " << luas << endl;
    
}

int main(){
    procedurinput();
    prosedurhitungluas();
    proseduroutput();
    
    
}