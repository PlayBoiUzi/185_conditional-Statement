#include <iostream>
using namespace std;



double alas,tinggi;
void prosedurinput(){
    cout << "Masukkan nilai alas = ";
    cin >> alas;
    cout << "Masukkan nilai tinggi = ";
    cin >> tinggi;

}

double hitungluas(){
    return 0.5 * alas * tinggi;
}


void proseduroutput(){
    cout << "Luas segitiga = " << hitungluas() << endl;
    
}

int main(){
    prosedurinput();   
    proseduroutput();
    
    
}