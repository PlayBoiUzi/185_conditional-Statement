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

double Hitungluas2(double a, double t){
    return 0.5 * a * t; 
}

void proseduroutput(){
    cout << "Luas segitiga = " << hitungluas() << endl;
    
}

void proseduroutput2(){
    cout << "Luasn segitiga = " << Hitungluas2(alas,tinggi) << endl;

    
}

int main(){
    prosedurinput();   
    proseduroutput();
    proseduroutput2();
     
}